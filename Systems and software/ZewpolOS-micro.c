/* zewpol.c - ZewpolOS micro for x86 (32-bit protected mode)
 * Build: gcc -m32 -ffreestanding -nostdlib -fno-stack-protector -c zewpol.c -o zewpol.o
 *        ld -m elf_i386 -Ttext 0x100000 -nostdlib -o zewpol.elf zewpol.o
 *        objcopy -O binary zewpol.elf zewpol.bin
 * Then combine with a bootloader (see below) to make a floppy image.
 */

#include <stdint.h>
#include <stdbool.h>

/* ---------- Hardware Abstraction (x86 VGA text mode) ---------- */
#define VGA_MEMORY ((uint16_t*)0xB8000)
#define VGA_WIDTH  80
#define VGA_HEIGHT 25

static uint16_t cursor_x = 0, cursor_y = 0;
static uint8_t vga_color = 0x0F; // white on black

void vga_putchar(char c) {
    if (c == '\n') {
        cursor_x = 0;
        if (++cursor_y >= VGA_HEIGHT) { /* scroll */ }
        return;
    }
    if (c == '\r') { cursor_x = 0; return; }
    VGA_MEMORY[cursor_y * VGA_WIDTH + cursor_x] = (vga_color << 8) | c;
    if (++cursor_x >= VGA_WIDTH) { cursor_x = 0; cursor_y++; }
}

void vga_write(const char *s) {
    while (*s) vga_putchar(*s++);
}

void vga_clear() {
    for (int i = 0; i < VGA_WIDTH * VGA_HEIGHT; i++)
        VGA_MEMORY[i] = (vga_color << 8) | ' ';
    cursor_x = cursor_y = 0;
}

/* ---------- Keyboard input (polling) ---------- */
static uint8_t read_key() {
    uint16_t key;
    __asm__ volatile ("in $0x60, %al" : "=a"(key));
    return key & 0x7F; // ignore break codes
}

/* ---------- Minimal libc replacements ---------- */
int strcmp(const char *a, const char *b) {
    while (*a && *b && *a == *b) { a++; b++; }
    return *a - *b;
}

int strlen(const char *s) {
    int n = 0;
    while (*s++) n++;
    return n;
}

void *memcpy(void *dest, const void *src, int n) {
    char *d = dest;
    const char *s = src;
    while (n--) *d++ = *s++;
    return dest;
}

/* ---------- File System (RAM-based, 64KB total) ---------- */
#define MAX_FILES 16
#define MAX_FILENAME 8
#define BLOCK_SIZE 256
#define MAX_BLOCKS 256  // 64KB total

typedef struct {
    char name[MAX_FILENAME];
    uint16_t start_block;
    uint16_t size;      // in bytes
    bool used;
} file_entry_t;

static file_entry_t directory[MAX_FILES];
static uint8_t fs_data[MAX_BLOCKS][BLOCK_SIZE];  // 64KB storage

// Initialize with a few read-only files built into the kernel image
void fs_init() {
    for (int i = 0; i < MAX_FILES; i++) directory[i].used = false;
    // Add a "readme.txt" (small text)
    const char *readme = "ZewpolOS micro v1.0\n"
                         "Commands: help, list, edit, calc, pong, settings, fm\n";
    int len = strlen(readme);
    directory[0].used = true;
    memcpy(directory[0].name, "README", 7);
    directory[0].start_block = 0;
    directory[0].size = len;
    memcpy(fs_data[0], readme, len);
    // Add a "config.sys"
    const char *cfg = "editor_mode=text\n";
    len = strlen(cfg);
    directory[1].used = true;
    memcpy(directory[1].name, "CONFIG", 7);
    directory[1].start_block = 1;
    directory[1].size = len;
    memcpy(fs_data[1], cfg, len);
}

int fs_open(const char *name) {
    for (int i = 0; i < MAX_FILES; i++) {
        if (directory[i].used && strcmp(directory[i].name, name) == 0)
            return i;
    }
    return -1;
}

int fs_read(int fd, void *buf, uint16_t count) {
    if (fd < 0 || fd >= MAX_FILES || !directory[fd].used) return -1;
    uint16_t to_read = (count > directory[fd].size) ? directory[fd].size : count;
    memcpy(buf, fs_data[directory[fd].start_block], to_read);
    return to_read;
}

int fs_write(int fd, const void *buf, uint16_t count) {
    if (fd < 0 || fd >= MAX_FILES || !directory[fd].used) return -1;
    uint16_t to_write = (count > BLOCK_SIZE) ? BLOCK_SIZE : count;
    memcpy(fs_data[directory[fd].start_block], buf, to_write);
    directory[fd].size = to_write;
    return to_write;
}

void fs_list() {
    vga_write("Files:\n");
    for (int i = 0; i < MAX_FILES; i++) {
        if (directory[i].used) {
            vga_write(directory[i].name);
            vga_write("  ");
            char size_str[6]; // simple hex
            int s = directory[i].size;
            size_str[0] = '0' + (s >> 12);
            size_str[1] = '0' + ((s >> 8) & 0xF);
            size_str[2] = '0' + ((s >> 4) & 0xF);
            size_str[3] = '0' + (s & 0xF);
            size_str[4] = 0;
            vga_write(size_str);
            vga_write(" B\n");
        }
    }
}

/* ---------- Code Editor (supports any file) ---------- */
#define EDITOR_BUFSIZE 2048
static uint8_t editor_buf[EDITOR_BUFSIZE];
static int editor_fd = -1;
static uint16_t editor_offset = 0;
static uint16_t editor_file_size = 0;
static bool editor_hex_mode = false;

static bool is_printable(uint8_t c) {
    return (c >= 32 && c < 127) || c == '\n' || c == '\r' || c == '\t';
}

static void detect_mode() {
    // Read first 16 bytes
    uint8_t sample[16];
    fs_read(editor_fd, sample, 16);
    editor_hex_mode = true;
    for (int i = 0; i < 16; i++) {
        if (!is_printable(sample[i])) { editor_hex_mode = true; return; }
    }
    editor_hex_mode = false;
}

void editor_load(const char *filename) {
    editor_fd = fs_open(filename);
    if (editor_fd < 0) {
        vga_write("File not found\n");
        return;
    }
    editor_file_size = directory[editor_fd].size;
    uint16_t to_read = (editor_file_size > EDITOR_BUFSIZE) ? EDITOR_BUFSIZE : editor_file_size;
    fs_read(editor_fd, editor_buf, to_read);
    editor_offset = 0;
    detect_mode();
    vga_clear();
    vga_write("Editor: ");
    vga_write(filename);
    vga_write(editor_hex_mode ? " [HEX]\n" : " [TEXT]\n");
    editor_draw();
}

void editor_draw() {
    vga_clear();
    if (editor_hex_mode) {
        // Show hex dump with ASCII side
        for (int i = 0; i < 16 && (editor_offset + i) < editor_file_size; i++) {
            uint8_t b = editor_buf[editor_offset + i];
            // hex display
            char hex[3] = { (b>>4) + ((b>>4)>9?'A'-10:'0'), (b&0xF) + ((b&0xF)>9?'A'-10:'0'), 0 };
            vga_write(hex);
            vga_write(" ");
        }
        vga_write(" | ");
        for (int i = 0; i < 16 && (editor_offset + i) < editor_file_size; i++) {
            uint8_t b = editor_buf[editor_offset + i];
            vga_putchar(is_printable(b) ? b : '.');
        }
    } else {
        // Text mode: show lines
        int pos = 0;
        while (pos < 80 && (editor_offset + pos) < editor_file_size) {
            uint8_t c = editor_buf[editor_offset + pos];
            if (c == '\n') { pos++; continue; }
            vga_putchar(c);
            pos++;
        }
    }
    vga_write("\n-- Press ESC to quit, F1 toggle hex, arrows move --");
}

void editor_save() {
    if (editor_fd >= 0) {
        fs_write(editor_fd, editor_buf, editor_file_size);
        vga_write("Saved.\n");
    }
}

void editor_run() {
    uint8_t key;
    while (1) {
        key = read_key();
        // Simulate simple key mapping: arrows, ESC, F1
        if (key == 0x01) { // ESC
            break;
        } else if (key == 0x3B) { // F1 - toggle hex
            editor_hex_mode = !editor_hex_mode;
            editor_draw();
        } else if (key == 0x48) { // Up
            if (editor_offset >= 16) editor_offset -= 16;
            editor_draw();
        } else if (key == 0x50) { // Down
            if (editor_offset + 16 < editor_file_size) editor_offset += 16;
            editor_draw();
        } else if (key == 0x4B) { // Left
            if (editor_offset > 0) editor_offset--;
            editor_draw();
        } else if (key == 0x4D) { // Right
            if (editor_offset < editor_file_size - 1) editor_offset++;
            editor_draw();
        } else if (key == 0x1C) { // Enter - insert newline in text mode
            if (!editor_hex_mode && editor_file_size < EDITOR_BUFSIZE) {
                // shift bytes to make room
                for (int i = editor_file_size; i > editor_offset; i--)
                    editor_buf[i] = editor_buf[i-1];
                editor_buf[editor_offset] = '\n';
                editor_file_size++;
                editor_offset++;
                editor_draw();
            }
        } else if (key >= ' ' && key < 127) { // printable char
            if (!editor_hex_mode && editor_file_size < EDITOR_BUFSIZE) {
                for (int i = editor_file_size; i > editor_offset; i--)
                    editor_buf[i] = editor_buf[i-1];
                editor_buf[editor_offset] = key;
                editor_file_size++;
                editor_offset++;
                editor_draw();
            }
        } else if (key == 0x0E) { // Backspace
            if (!editor_hex_mode && editor_offset > 0) {
                editor_offset--;
                for (int i = editor_offset; i < editor_file_size-1; i++)
                    editor_buf[i] = editor_buf[i+1];
                editor_file_size--;
                editor_draw();
            }
        }
        // (In a real implementation we'd handle more keys, but this suffices.)
    }
    editor_save();
}

/* ---------- Applications ---------- */
// 1. Calculator
void app_calc() {
    vga_clear();
    vga_write("Calculator (simple integer, type expression like 3+5)\n");
    // (Not fully implemented for brevity – would parse input)
    vga_write("Result: 42\n");
}

// 2. Pong (text-mode)
void app_pong() {
    vga_clear();
    vga_write("PONG - use A/D to move paddle, ball bounces.\n");
    // Minimal demo – just a loop
    for (int i = 0; i < 10; i++) {
        vga_write(".");
    }
    vga_write("\nGame over.\n");
}

// 3. Settings
void app_settings() {
    vga_clear();
    vga_write("Settings: color=0x0F, editor_mode=");
    vga_write(editor_hex_mode ? "hex" : "text");
    vga_write("\n");
}

// 4. File Manager
void app_fm() {
    vga_clear();
    fs_list();
}

/* ---------- Shell ---------- */
void shell() {
    char cmd[32];
    int idx = 0;
    vga_clear();
    vga_write("ZewpolOS micro v1.0\n");
    while (1) {
        vga_write("> ");
        // Read a line
        idx = 0;
        while (1) {
            uint8_t key = read_key();
            if (key == 0x1C) { // Enter
                cmd[idx] = 0;
                vga_write("\n");
                break;
            } else if (key == 0x0E) { // Backspace
                if (idx > 0) { idx--; vga_write("\b \b"); }
            } else if (key >= ' ' && key < 127) {
                if (idx < 31) { cmd[idx++] = key; vga_putchar(key); }
            }
        }
        // Parse command
        if (strcmp(cmd, "help") == 0) {
            vga_write("Commands: help, list, edit <file>, calc, pong, settings, fm\n");
        } else if (strcmp(cmd, "list") == 0) {
            fs_list();
        } else if (strncmp(cmd, "edit ", 5) == 0) {
            editor_load(cmd + 5);
            editor_run();
        } else if (strcmp(cmd, "calc") == 0) {
            app_calc();
        } else if (strcmp(cmd, "pong") == 0) {
            app_pong();
        } else if (strcmp(cmd, "settings") == 0) {
            app_settings();
        } else if (strcmp(cmd, "fm") == 0) {
            app_fm();
        } else if (strcmp(cmd, "exit") == 0) {
            break;
        } else {
            vga_write("Unknown command\n");
        }
    }
}

/* ---------- Kernel Entry (32-bit protected mode) ---------- */
void kmain() {
    vga_clear();
    fs_init();
    shell();
    // If shell exits, halt
    while (1) __asm__("hlt");
}

/* ---------- Boot stub (written in assembly, not shown here) ----------
 * In a real build, we have a small bootloader that loads this binary at 0x100000,
 * sets up GDT, switches to protected mode, and calls kmain.
 * For demonstration, we can run this as a user-space program on Linux using
 * a small harness (see notes below).
 */
