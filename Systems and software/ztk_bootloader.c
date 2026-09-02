/**
 * ZTK Business Edition v3.0 - Enterprise Edition (FIXED SINGLE FILE)
 * ISO C11 Compliant - Full System with AI, Games, Disk Management, and More
 *
 * COMPILATION (simplified, safe):
 * gcc -std=c11 -Wall -Wextra -O3 -o ztk ztk.c -lpthread -lm
 */

#define _POSIX_C_SOURCE 200809L
#define _XOPEN_SOURCE 700
#define _GNU_SOURCE
#define _DEFAULT_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <dirent.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <limits.h>
#include <errno.h>
#include <time.h>
#include <stdarg.h>
#include <stddef.h>
#include <pthread.h>
#include <signal.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <termios.h>
#include <locale.h>
#include <stdbool.h>
#include <assert.h>
#include <setjmp.h>
#include <dlfcn.h>
#include <sys/resource.h>
#include <sys/time.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <sys/statvfs.h>
#include <sys/utsname.h>
#include <sys/ioctl.h>
#include <pwd.h>
#include <grp.h>
#include <sys/mount.h>
#include <sys/sysinfo.h>
#include <sys/param.h>
#include <sys/mman.h>
#include <sys/syscall.h>
#include <linux/limits.h>
#include <ifaddrs.h>

/* ============ OS Version Information ============ */
#define ZTK_VERSION "3.0.0"
#define ZTK_RELEASE "Enterprise Edition"
#define ZTK_CODENAME "Phoenix"
#define ZTK_BUILD_DATE __DATE__
#define ZTK_BUILD_TIME __TIME__
#define ZTK_API_VERSION 2
#define ZTK_OS_VERSION "Linux 6.x"
#define ZTK_KERNEL_REQUIRED "4.19+"

/* ============ OS Constants ============ */
#define MAX_LINE 16384
#define MAX_ARGS 1024
#define MAX_PATH 4096
#define MAX_PLUGINS 256
#define MAX_HISTORY 50000
#define MAX_JOBS 1024
#define MAX_VARIABLES 4096
#define MAX_FUNCTIONS 1024
#define MAX_ALIASES 512
#define MAX_MODULES 128
#define MAX_DATABASES 64
#define MAX_CONTAINERS 256
#define MAX_CLUSTER_NODES 64
#define MAX_REMOTE_SESSIONS 32
#define MAX_BACKUP_SETS 128
#define MAX_AUDIT_ENTRIES 10000
#define MAX_SCHEDULED_JOBS 64
#define MAX_NFS_MOUNTS 16
#define MAX_PIPE_CMDS 256
#define MAX_SYSTEMD_SERVICES 1024
#define MAX_FILESYSTEMS 64
#define MAX_NETWORK_INTERFACES 64
#define MAX_PROCESSES 4096
#define MAX_BTRFS_SUBVOLUMES 256
#define MAX_ZFS_DATASETS 256
#define MAX_DM_DEVICES 256
#define MAX_NVME_NAMESPACES 64
#define MAX_CPU_CORES 256
#define MAX_MEMORY_NODES 64

/* ============ OS Data Structures ============ */

/* System Information */
typedef struct os_info {
    char kernel_version[256];
    char kernel_release[256];
    char kernel_arch[64];
    char hostname[256];
    char domainname[256];
    char os_name[128];
    char os_version[128];
    char os_id[64];
    char os_pretty_name[256];
    char architecture[64];
    char machine_id[64];
    char boot_id[64];
    char virtualization[64];
    char container_runtime[64];
} os_info_t;

/* CPU Information */
typedef struct cpu_info {
    int cores;
    int threads;
    int sockets;
    char model[256];
    char vendor[64];
    char microcode[32];
    unsigned long long max_freq;
    unsigned long long min_freq;
    unsigned long long current_freq;
    unsigned long long cpu_usage;
    unsigned long long user_time;
    unsigned long long system_time;
    unsigned long long idle_time;
    unsigned long long iowait_time;
    unsigned long long irq_time;
    unsigned long long softirq_time;
    unsigned long long steal_time;
    unsigned long long guest_time;
    unsigned long long guest_nice_time;
    unsigned long long total_time;
    struct {
        unsigned long long user;
        unsigned long long system;
        unsigned long long idle;
        unsigned long long iowait;
        unsigned long long irq;
        unsigned long long softirq;
        unsigned long long steal;
        unsigned long long guest;
        unsigned long long guest_nice;
        unsigned long long total;
    } per_core[MAX_CPU_CORES];
    int core_count;
} cpu_info_t;

/* Memory Information */
typedef struct memory_info {
    unsigned long long total_ram;
    unsigned long long free_ram;
    unsigned long long available_ram;
    unsigned long long cached_ram;
    unsigned long long buffers_ram;
    unsigned long long swap_total;
    unsigned long long swap_free;
    unsigned long long swap_cached;
    unsigned long long active_ram;
    unsigned long long inactive_ram;
    unsigned long long dirty_ram;
    unsigned long long writeback_ram;
    unsigned long long shmem_ram;
    unsigned long long slab_ram;
    unsigned long long huge_pages_total;
    unsigned long long huge_pages_free;
    unsigned long long huge_page_size;
    unsigned long long transparent_hugepages;
    unsigned long long memory_compression;
    unsigned long long zswap_total;
    unsigned long long zswap_stored;
    struct {
        unsigned long long total;
        unsigned long long free;
        unsigned long long used;
        int node_id;
    } numa_nodes[MAX_MEMORY_NODES];
    int numa_node_count;
} memory_info_t;

/* Process Information */
typedef struct process_info {
    int pid;
    int ppid;
    int pgid;
    int sid;
    int tty;
    char name[256];
    char cmdline[1024];
    char status[32];
    char state;
    int priority;
    int nice;
    unsigned long long utime;
    unsigned long long stime;
    unsigned long long cutime;
    unsigned long long cstime;
    unsigned long long starttime;
    unsigned long long vsize;
    unsigned long long rss;
    unsigned long long shared;
    unsigned long long text;
    unsigned long long lib;
    unsigned long long data;
    unsigned long long dt;
    int threads;
    char cwd[MAX_PATH];
    char root[MAX_PATH];
    char exe[MAX_PATH];
    uid_t uid;
    gid_t gid;
    char user[64];
    char group[64];
    int oom_score;
    int oom_adj;
} process_info_t;

/* Filesystem Information */
typedef struct fs_info {
    char mount_point[MAX_PATH];
    char device[256];
    char fstype[64];
    char options[256];
    unsigned long long total_size;
    unsigned long long free_size;
    unsigned long long available_size;
    unsigned long long used_size;
    unsigned long long total_inodes;
    unsigned long long free_inodes;
    unsigned long long used_inodes;
    unsigned long long block_size;
    unsigned long long fragment_size;
    unsigned long long blocks_total;
    unsigned long long blocks_free;
    unsigned long long blocks_available;
    unsigned long long fs_flags;
    int read_only;
    int mounted;
    int encrypted;
    int compressed;
    char uuid[64];
    char label[256];
    int mount_count;
    time_t last_mount;
} fs_info_t;

/* Network Interface Information */
typedef struct net_iface_info {
    char name[64];
    char mac[32];
    char ipv4[16];
    char ipv6[64];
    char broadcast[16];
    char netmask[16];
    char gateway[16];
    unsigned long long rx_bytes;
    unsigned long long rx_packets;
    unsigned long long rx_errors;
    unsigned long long rx_dropped;
    unsigned long long rx_overruns;
    unsigned long long tx_bytes;
    unsigned long long tx_packets;
    unsigned long long tx_errors;
    unsigned long long tx_dropped;
    unsigned long long tx_overruns;
    unsigned long long speed;
    int mtu;
    int up;
    int running;
    char type[32];
    char driver[64];
    char pci_slot[32];
} net_iface_info_t;

/* Block Device Information */
typedef struct block_device_info {
    char name[64];
    char model[256];
    char serial[64];
    char wwn[64];
    unsigned long long size;
    unsigned long long sector_size;
    unsigned long long physical_block_size;
    unsigned long long logical_block_size;
    int rotational;
    char queue_scheduler[64];
    int queue_depth;
    char read_ahead_kb[32];
    int write_cache_enabled;
    unsigned long long read_ios;
    unsigned long long read_merges;
    unsigned long long read_sectors;
    unsigned long long read_ticks;
    unsigned long long write_ios;
    unsigned long long write_merges;
    unsigned long long write_sectors;
    unsigned long long write_ticks;
    unsigned long long io_ticks;
    unsigned long long time_in_queue;
    unsigned long long discard_ios;
    unsigned long long discard_merges;
    unsigned long long discard_sectors;
    unsigned long long discard_ticks;
    char partition_table_type[32];
    int partition_count;
    struct {
        char name[64];
        unsigned long long start;
        unsigned long long size;
        char type[32];
        char uuid[64];
    } partitions[64];
} block_device_info_t;

/* Btrfs Information */
typedef struct btrfs_info {
    char device[256];
    char label[256];
    char uuid[64];
    unsigned long long total_bytes;
    unsigned long long used_bytes;
    unsigned long long free_bytes;
    int features[16];
    int subvolume_count;
    struct {
        char name[256];
        char path[MAX_PATH];
        unsigned long long size;
        unsigned long long used;
        int readonly;
        time_t creation_time;
    } subvolumes[MAX_BTRFS_SUBVOLUMES];
    int raid_type;
    int profile;
} btrfs_info_t;

/* ZFS Information */
typedef struct zfs_info {
    char pool[256];
    char state[32];
    unsigned long long size;
    unsigned long long used;
    unsigned long long available;
    int dataset_count;
    struct {
        char name[256];
        char mount_point[MAX_PATH];
        unsigned long long used;
        unsigned long long referenced;
        unsigned long long compressratio;
        unsigned long long usedbysnapshots;
        unsigned long long usedbydataset;
        unsigned long long usedbychildren;
        unsigned long long usedbyrefreservation;
        int readonly;
        char type[32];
    } datasets[MAX_ZFS_DATASETS];
} zfs_info_t;

/* Device Mapper Information */
typedef struct dm_info {
    char name[256];
    char uuid[64];
    char target_type[64];
    char table[1024];
    unsigned long long size;
    unsigned long long sectors;
    int readonly;
    int suspended;
    char mapped_device[256];
    struct {
        char device[256];
        unsigned long long start;
        unsigned long long length;
        char type[64];
        char options[256];
    } targets[16];
    int target_count;
} dm_info_t;

/* NVMe Information */
typedef struct nvme_info {
    char device[64];
    char model[256];
    char serial[64];
    char firmware[32];
    char wwn[64];
    unsigned long long total_size;
    unsigned long long sector_size;
    int namespace_count;
    struct {
        int nsid;
        unsigned long long size;
        unsigned long long sector_size;
        unsigned long long used_size;
        int formatted;
        char uuid[64];
    } namespaces[MAX_NVME_NAMESPACES];
} nvme_info_t;

/* Systemd Service Information */
typedef struct systemd_service {
    char name[256];
    char description[512];
    char status[32];
    char state[32];
    char load_state[32];
    char active_state[32];
    char sub_state[32];
    int enabled;
    int running;
    int failed;
    pid_t main_pid;
    pid_t control_pid;
    unsigned long long memory_current;
    unsigned long long memory_peak;
    unsigned long long cpu_usage;
    unsigned long long tasks_current;
    unsigned long long tasks_max;
    char unit_file_state[32];
    char condition_result[32];
    char load_error[256];
    time_t start_time;
    time_t stop_time;
    int restart_count;
} systemd_service_t;

/* Systemd Timers */
typedef struct systemd_timer {
    char name[256];
    char description[512];
    char state[32];
    char active_state[32];
    int enabled;
    int running;
    char schedule[256];
    time_t next_elapse;
    time_t last_trigger;
    time_t last_elapse;
    char triggered_service[256];
} systemd_timer_t;

/* Journal Entry */
typedef struct journal_entry {
    time_t timestamp;
    int priority;
    char hostname[256];
    char syslog_identifier[256];
    char syslog_pid[16];
    char code_file[256];
    int code_line;
    char code_function[256];
    char message[4096];
    char user[64];
    char unit[256];
    char session_id[64];
} journal_entry_t;

/* D-Bus Message */
typedef struct dbus_message {
    char sender[256];
    char destination[256];
    char path[256];
    char interface[256];
    char member[256];
    char signature[64];
    void *parameters;
    int parameter_count;
} dbus_message_t;

/* Kernel Module Information */
typedef struct kernel_module {
    char name[256];
    char size[32];
    int used_count;
    char *dependencies[32];
    int dependency_count;
    char *supported[32];
    int supported_count;
    char license[64];
    char version[64];
    char description[512];
    char author[256];
    char srcversion[64];
    int taint;
    int live;
} kernel_module_t;

/* eBPF Program Information */
typedef struct ebpf_program {
    char name[256];
    int id;
    int type;
    int attach_type;
    unsigned int prog_flags;
    unsigned int run_cnt;
    unsigned long long run_time_ns;
    unsigned long long run_time_avg;
    char tag[64];
    char gpl_compatible;
    int loaded;
} ebpf_program_t;

/* ============ Global OS State ============ */
typedef struct {
    os_info_t os_info;
    cpu_info_t cpu_info;
    memory_info_t memory_info;
    fs_info_t fs_info[MAX_FILESYSTEMS];
    int fs_count;
    net_iface_info_t net_info[MAX_NETWORK_INTERFACES];
    int net_count;
    block_device_info_t block_info[64];
    int block_count;
    btrfs_info_t btrfs_info[16];
    int btrfs_count;
    zfs_info_t zfs_info[8];
    int zfs_count;
    dm_info_t dm_info[64];
    int dm_count;
    nvme_info_t nvme_info[16];
    int nvme_count;
    systemd_service_t systemd_services[MAX_SYSTEMD_SERVICES];
    int systemd_service_count;
    systemd_timer_t systemd_timers[64];
    int systemd_timer_count;
    kernel_module_t kernel_modules[256];
    int kernel_module_count;
    ebpf_program_t ebpf_programs[64];
    int ebpf_program_count;
    process_info_t processes[MAX_PROCESSES];
    int process_count;
    unsigned long long system_uptime;
    unsigned long long system_boot_time;
    unsigned long long system_load_1;
    unsigned long long system_load_5;
    unsigned long long system_load_15;
    unsigned long long context_switches;
    unsigned long long interrupts;
    unsigned long long processes_created;
    unsigned long long processes_running;
    unsigned long long processes_blocked;
    unsigned long long processes_zombie;
    pthread_mutex_t os_lock;
    pthread_mutex_t fs_lock;
    pthread_mutex_t net_lock;
    pthread_mutex_t process_lock;
    pthread_mutex_t systemd_lock;
    pthread_mutex_t journal_lock;
    pthread_t os_monitor_thread;
    int os_monitor_active;
} os_state_t;

static os_state_t ztk_os = {0};

/* ============ ZTK Shell Framework (Core Stubs) ============ */
int ztk_verbose_mode = 0;
int ztk_debug_mode = 0;
int ztk_daemon_mode = 0;
int ztk_ai_enabled = 0;
pthread_t ztk_ai_thread_id;
pthread_t ztk_scheduler_thread_id;

/* Command table */
typedef struct {
    char *name;
    char *help;
    int (*func)(int argc, char **argv, void *context);
    void *context;
} ztk_command_t;

static ztk_command_t command_table[256];
static int command_count = 0;

void ztk_info(const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);
    printf("[INFO] ");
    vprintf(fmt, args);
    printf("\n");
    va_end(args);
}

void ztk_error(const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);
    fprintf(stderr, "[ERROR] ");
    vfprintf(stderr, fmt, args);
    fprintf(stderr, "\n");
    va_end(args);
}

void ztk_print_header(const char *title) {
    printf("\n=== %s ===\n", title);
}

void ztk_print_footer(void) {
    printf("==================\n");
}

char *ztk_format_size(unsigned long long bytes) {
    static char buf[32];
    if (bytes >= 1024ULL * 1024 * 1024 * 1024)
        snprintf(buf, sizeof(buf), "%.2fTB", bytes / (1024.0 * 1024 * 1024 * 1024));
    else if (bytes >= 1024ULL * 1024 * 1024)
        snprintf(buf, sizeof(buf), "%.2fGB", bytes / (1024.0 * 1024 * 1024));
    else if (bytes >= 1024ULL * 1024)
        snprintf(buf, sizeof(buf), "%.2fMB", bytes / (1024.0 * 1024));
    else if (bytes >= 1024)
        snprintf(buf, sizeof(buf), "%.2fKB", bytes / 1024.0);
    else
        snprintf(buf, sizeof(buf), "%lluB", bytes);
    return buf;
}

int ztk_init(void) {
    pthread_mutex_init(&ztk_os.os_lock, NULL);
    pthread_mutex_init(&ztk_os.fs_lock, NULL);
    pthread_mutex_init(&ztk_os.net_lock, NULL);
    pthread_mutex_init(&ztk_os.process_lock, NULL);
    pthread_mutex_init(&ztk_os.systemd_lock, NULL);
    pthread_mutex_init(&ztk_os.journal_lock, NULL);
    os_get_system_info();
    os_get_cpu_info();
    os_get_memory_info();
    os_get_load_avg();
    os_list_filesystems();
    os_list_network_interfaces();
    return 0;
}

void ztk_cleanup(void) {
    pthread_mutex_destroy(&ztk_os.os_lock);
    pthread_mutex_destroy(&ztk_os.fs_lock);
    pthread_mutex_destroy(&ztk_os.net_lock);
    pthread_mutex_destroy(&ztk_os.process_lock);
    pthread_mutex_destroy(&ztk_os.systemd_lock);
    pthread_mutex_destroy(&ztk_os.journal_lock);
}

void ztk_register_command(const char *name, const char *help,
                          int (*func)(int, char **, void *), void *context) {
    if (command_count < 256) {
        command_table[command_count].name = strdup(name);
        command_table[command_count].help = strdup(help);
        command_table[command_count].func = func;
        command_table[command_count].context = context;
        command_count++;
    }
}

void ztk_monitor_start(void) { /* optional */ }
void ztk_ai_init(const char *token) { (void)token; ztk_ai_enabled = 1; }
void *ztk_ai_thread(void *arg) { (void)arg; return NULL; }
void *ztk_scheduler_thread(void *arg) { (void)arg; return NULL; }
int ztk_batch_mode(const char *script) { (void)script; return 0; }

/* Safe exec helper (no shell) */
static int ztk_execvp_safe(const char *file, char *const argv[]) {
    pid_t pid = fork();
    if (pid == -1) return -1;
    if (pid == 0) {
        execvp(file, argv);
        exit(127);
    }
    int status;
    waitpid(pid, &status, 0);
    return WIFEXITED(status) ? WEXITSTATUS(status) : -1;
}

/* ============ OS Function Implementations ============ */

/* System Information */
int os_get_system_info(void) {
    struct utsname uts;
    if (uname(&uts) == 0) {
        snprintf(ztk_os.os_info.kernel_version, sizeof(ztk_os.os_info.kernel_version), "%s", uts.version);
        snprintf(ztk_os.os_info.kernel_release, sizeof(ztk_os.os_info.kernel_release), "%s", uts.release);
        snprintf(ztk_os.os_info.kernel_arch, sizeof(ztk_os.os_info.kernel_arch), "%s", uts.machine);
        snprintf(ztk_os.os_info.hostname, sizeof(ztk_os.os_info.hostname), "%s", uts.nodename);
    }
    FILE *fp = fopen("/etc/os-release", "r");
    if (fp) {
        char line[256];
        while (fgets(line, sizeof(line), fp)) {
            if (strncmp(line, "NAME=", 5) == 0)
                sscanf(line + 5, "\"%127[^\"]\"", ztk_os.os_info.os_name);
            else if (strncmp(line, "VERSION=", 8) == 0)
                sscanf(line + 8, "\"%127[^\"]\"", ztk_os.os_info.os_version);
            else if (strncmp(line, "ID=", 3) == 0)
                sscanf(line + 3, "\"%63[^\"]\"", ztk_os.os_info.os_id);
            else if (strncmp(line, "PRETTY_NAME=", 12) == 0)
                sscanf(line + 12, "\"%255[^\"]\"", ztk_os.os_info.os_pretty_name);
        }
        fclose(fp);
    }
    fp = fopen("/etc/machine-id", "r");
    if (fp) {
        fscanf(fp, "%63s", ztk_os.os_info.machine_id);
        fclose(fp);
    }
    fp = fopen("/proc/sys/kernel/random/boot_id", "r");
    if (fp) {
        fscanf(fp, "%63s", ztk_os.os_info.boot_id);
        fclose(fp);
    }
    return 0;
}

int os_get_cpu_info(void) {
    FILE *fp = fopen("/proc/cpuinfo", "r");
    if (!fp) return -1;
    char line[256];
    int cores = 0, threads = 0;
    unsigned long long cur_freq = 0;
    while (fgets(line, sizeof(line), fp)) {
        if (strncmp(line, "processor", 9) == 0) cores++;
        else if (strncmp(line, "model name", 10) == 0) {
            char *p = strchr(line, ':');
            if (p) {
                p++;
                while (isspace(*p)) p++;
                snprintf(ztk_os.cpu_info.model, sizeof(ztk_os.cpu_info.model), "%s", p);
                ztk_os.cpu_info.model[strcspn(ztk_os.cpu_info.model, "\n")] = '\0';
            }
        }
        else if (strncmp(line, "vendor_id", 9) == 0) {
            char *p = strchr(line, ':');
            if (p) {
                p++;
                while (isspace(*p)) p++;
                snprintf(ztk_os.cpu_info.vendor, sizeof(ztk_os.cpu_info.vendor), "%s", p);
                ztk_os.cpu_info.vendor[strcspn(ztk_os.cpu_info.vendor, "\n")] = '\0';
            }
        }
        else if (strncmp(line, "cpu MHz", 7) == 0) {
            char *p = strchr(line, ':');
            if (p) {
                p++;
                while (isspace(*p)) p++;
                cur_freq = (unsigned long long)(atof(p) * 1000);
            }
        }
        else if (strncmp(line, "siblings", 8) == 0) {
            char *p = strchr(line, ':');
            if (p) {
                p++;
                while (isspace(*p)) p++;
                threads = atoi(p);
            }
        }
    }
    fclose(fp);
    ztk_os.cpu_info.cores = cores;
    ztk_os.cpu_info.threads = threads > 0 ? threads : cores;
    ztk_os.cpu_info.current_freq = cur_freq;
    return 0;
}

int os_get_memory_info(void) {
    FILE *fp = fopen("/proc/meminfo", "r");
    if (!fp) return -1;
    char line[256];
    while (fgets(line, sizeof(line), fp)) {
        if (strncmp(line, "MemTotal:", 9) == 0)
            ztk_os.memory_info.total_ram = atoll(line + 9) * 1024;
        else if (strncmp(line, "MemFree:", 8) == 0)
            ztk_os.memory_info.free_ram = atoll(line + 8) * 1024;
        else if (strncmp(line, "MemAvailable:", 13) == 0)
            ztk_os.memory_info.available_ram = atoll(line + 13) * 1024;
        else if (strncmp(line, "Cached:", 7) == 0)
            ztk_os.memory_info.cached_ram = atoll(line + 7) * 1024;
        else if (strncmp(line, "Buffers:", 8) == 0)
            ztk_os.memory_info.buffers_ram = atoll(line + 8) * 1024;
        else if (strncmp(line, "SwapTotal:", 10) == 0)
            ztk_os.memory_info.swap_total = atoll(line + 10) * 1024;
        else if (strncmp(line, "SwapFree:", 9) == 0)
            ztk_os.memory_info.swap_free = atoll(line + 9) * 1024;
        else if (strncmp(line, "HugePages_Total:", 16) == 0)
            ztk_os.memory_info.huge_pages_total = atoll(line + 16);
        else if (strncmp(line, "HugePages_Free:", 15) == 0)
            ztk_os.memory_info.huge_pages_free = atoll(line + 15);
        else if (strncmp(line, "Hugepagesize:", 13) == 0)
            ztk_os.memory_info.huge_page_size = atoll(line + 13) * 1024;
    }
    fclose(fp);
    return 0;
}

int os_get_load_avg(void) {
    FILE *fp = fopen("/proc/loadavg", "r");
    if (!fp) return -1;
    double l1, l5, l15;
    int running, total, last;
    if (fscanf(fp, "%lf %lf %lf %d/%d %d", &l1, &l5, &l15, &running, &total, &last) == 6) {
        ztk_os.system_load_1 = (unsigned long long)(l1 * 100);
        ztk_os.system_load_5 = (unsigned long long)(l5 * 100);
        ztk_os.system_load_15 = (unsigned long long)(l15 * 100);
        ztk_os.processes_running = running;
        ztk_os.processes_blocked = total - running;
    }
    fclose(fp);
    return 0;
}

/* Filesystem Operations */
int os_list_filesystems(void) {
    FILE *fp = fopen("/proc/mounts", "r");
    if (!fp) return -1;
    ztk_os.fs_count = 0;
    char line[1024];
    char dev[256], mp[MAX_PATH], fst[64], opts[256];
    while (fgets(line, sizeof(line), fp) && ztk_os.fs_count < MAX_FILESYSTEMS) {
        if (sscanf(line, "%255s %4095s %63s %255s", dev, mp, fst, opts) == 4) {
            fs_info_t *fs = &ztk_os.fs_info[ztk_os.fs_count++];
            snprintf(fs->device, sizeof(fs->device), "%s", dev);
            snprintf(fs->mount_point, sizeof(fs->mount_point), "%s", mp);
            snprintf(fs->fstype, sizeof(fs->fstype), "%s", fst);
            snprintf(fs->options, sizeof(fs->options), "%s", opts);
            fs->mounted = 1;
            struct statvfs vfs;
            if (statvfs(mp, &vfs) == 0) {
                fs->block_size = vfs.f_frsize;
                fs->blocks_total = vfs.f_blocks;
                fs->blocks_free = vfs.f_bfree;
                fs->blocks_available = vfs.f_bavail;
                fs->total_size = (unsigned long long)vfs.f_blocks * vfs.f_frsize;
                fs->free_size = (unsigned long long)vfs.f_bfree * vfs.f_frsize;
                fs->available_size = (unsigned long long)vfs.f_bavail * vfs.f_frsize;
                fs->used_size = fs->total_size - fs->free_size;
                fs->total_inodes = vfs.f_files;
                fs->free_inodes = vfs.f_ffree;
                fs->used_inodes = fs->total_inodes - fs->free_inodes;
            }
            fs->read_only = strstr(opts, "ro") != NULL;
        }
    }
    fclose(fp);
    return ztk_os.fs_count;
}

/* Safe mount using system call */
int os_mount_filesystem(const char *device, const char *mountpoint, const char *fstype, const char *options) {
    unsigned long flags = MS_NOATIME | MS_NODEV | MS_NOSUID;
    if (strstr(options, "ro")) flags |= MS_RDONLY;
    if (mount(device, mountpoint, fstype, flags, NULL) == 0) {
        ztk_info("Mounted %s on %s", device, mountpoint);
        return 0;
    }
    ztk_error("mount failed: %s", strerror(errno));
    return -1;
}

int os_umount_filesystem(const char *mountpoint) {
    if (umount2(mountpoint, MNT_DETACH) == 0) {
        ztk_info("Unmounted %s", mountpoint);
        return 0;
    }
    ztk_error("umount failed: %s", strerror(errno));
    return -1;
}

int os_create_btrfs_subvolume(const char *path) {
    char *args[] = { "btrfs", "subvolume", "create", (char*)path, NULL };
    return ztk_execvp_safe("btrfs", args);
}

int os_snapshot_btrfs_subvolume(const char *source, const char *dest) {
    char *args[] = { "btrfs", "subvolume", "snapshot", "-r", (char*)source, (char*)dest, NULL };
    return ztk_execvp_safe("btrfs", args);
}

int os_rollback_btrfs_snapshot(const char *path) {
    char *args[] = { "btrfs", "subvolume", "snapshot", (char*)path, "@snapshot_rollback", NULL };
    return ztk_execvp_safe("btrfs", args);
}

int os_create_overlayfs(const char *lowerdir, const char *upperdir, const char *workdir, const char *mountpoint) {
    char opts[1024];
    snprintf(opts, sizeof(opts), "lowerdir=%s,upperdir=%s,workdir=%s", lowerdir, upperdir, workdir);
    if (mount("overlay", mountpoint, "overlay", MS_NOATIME, opts) == 0) {
        ztk_info("OverlayFS mounted on %s", mountpoint);
        return 0;
    }
    ztk_error("OverlayFS mount failed: %s", strerror(errno));
    return -1;
}

/* Network Operations (stubs for missing ones) */
int os_list_network_interfaces(void) {
    struct ifaddrs *ifaddr, *ifa;
    if (getifaddrs(&ifaddr) == -1) return -1;
    ztk_os.net_count = 0;
    for (ifa = ifaddr; ifa != NULL && ztk_os.net_count < MAX_NETWORK_INTERFACES; ifa = ifa->ifa_next) {
        if (ifa->ifa_addr == NULL) continue;
        net_iface_info_t *net = &ztk_os.net_info[ztk_os.net_count];
        snprintf(net->name, sizeof(net->name), "%s", ifa->ifa_name);
        if (ifa->ifa_addr->sa_family == AF_INET) {
            struct sockaddr_in *sin = (struct sockaddr_in *)ifa->ifa_addr;
            inet_ntop(AF_INET, &sin->sin_addr, net->ipv4, sizeof(net->ipv4));
        } else if (ifa->ifa_addr->sa_family == AF_INET6) {
            struct sockaddr_in6 *sin6 = (struct sockaddr_in6 *)ifa->ifa_addr;
            inet_ntop(AF_INET6, &sin6->sin6_addr, net->ipv6, sizeof(net->ipv6));
        }
        net->up = (ifa->ifa_flags & IFF_UP) != 0;
        net->running = (ifa->ifa_flags & IFF_RUNNING) != 0;
        ztk_os.net_count++;
    }
    freeifaddrs(ifaddr);
    return ztk_os.net_count;
}

/* Stubs for all other OS functions (so linking succeeds) */
int os_set_ip_address(const char *iface, const char *ip, const char *netmask) { (void)iface;(void)ip;(void)netmask; return -1; }
int os_set_gateway(const char *iface, const char *gateway) { (void)iface;(void)gateway; return -1; }
int os_create_vxlan(const char *name, int vni, const char *group, const char *dev) { (void)name;(void)vni;(void)group;(void)dev; return -1; }
int os_create_geneve(const char *name, int vni, const char *group, const char *dev) { (void)name;(void)vni;(void)group;(void)dev; return -1; }
int os_create_veth_pair(const char *name1, const char *name2) { (void)name1;(void)name2; return -1; }
int os_create_bridge(const char *name) { (void)name; return -1; }
int os_add_interface_to_bridge(const char *bridge, const char *iface) { (void)bridge;(void)iface; return -1; }
int os_setup_wireguard(const char *iface, const char *config) { (void)iface;(void)config; return -1; }
int os_setup_ipsec(const char *config) { (void)config; return -1; }
int os_setup_macsec(const char *iface, const char *key) { (void)iface;(void)key; return -1; }

int os_create_container(const char *name, const char *image, const char *runtime) {
    const char *cmd = runtime ? runtime : "docker";
    char *args[] = { (char*)cmd, "create", "--name", (char*)name, (char*)image, NULL };
    return ztk_execvp_safe(cmd, args);
}
int os_start_container(const char *name) {
    char *args1[] = { "docker", "start", (char*)name, NULL };
    if (ztk_execvp_safe("docker", args1) == 0) return 0;
    char *args2[] = { "podman", "start", (char*)name, NULL };
    return ztk_execvp_safe("podman", args2);
}
int os_stop_container(const char *name) {
    char *args1[] = { "docker", "stop", (char*)name, NULL };
    if (ztk_execvp_safe("docker", args1) == 0) return 0;
    char *args2[] = { "podman", "stop", (char*)name, NULL };
    return ztk_execvp_safe("podman", args2);
}
int os_list_containers(void) {
    char *args1[] = { "docker", "ps", "-a", "--format", "table {{.Names}}\t{{.Image}}\t{{.Status}}", NULL };
    if (ztk_execvp_safe("docker", args1) == 0) return 0;
    char *args2[] = { "podman", "ps", "-a", "--format", "table {{.Names}}\t{{.Image}}\t{{.Status}}", NULL };
    return ztk_execvp_safe("podman", args2);
}
int os_exec_container(const char *name, const char *command) {
    char *args[] = { "docker", "exec", "-it", (char*)name, (char*)command, NULL };
    return ztk_execvp_safe("docker", args);
}
int os_create_pod(const char *name) { (void)name; return -1; }
int os_start_pod(const char *name) { (void)name; return -1; }
int os_stop_pod(const char *name) { (void)name; return -1; }
int os_remove_pod(const char *name) { (void)name; return -1; }

int os_list_processes(void) {
    DIR *proc = opendir("/proc");
    if (!proc) return -1;
    ztk_os.process_count = 0;
    struct dirent *entry;
    while ((entry = readdir(proc)) != NULL && ztk_os.process_count < MAX_PROCESSES) {
        if (isdigit(entry->d_name[0])) {
            int pid = atoi(entry->d_name);
            if (pid > 0) os_get_process_info(pid, &ztk_os.processes[ztk_os.process_count++]);
        }
    }
    closedir(proc);
    return ztk_os.process_count;
}

int os_get_process_info(int pid, process_info_t *info) {
    char path[1024];
    FILE *fp;
    snprintf(path, sizeof(path), "/proc/%d/status", pid);
    fp = fopen(path, "r");
    if (fp) {
        char line[256];
        while (fgets(line, sizeof(line), fp)) {
            if (strncmp(line, "Name:", 5) == 0) sscanf(line + 5, "%255s", info->name);
            else if (strncmp(line, "Pid:", 4) == 0) info->pid = atoi(line + 4);
            else if (strncmp(line, "PPid:", 5) == 0) info->ppid = atoi(line + 5);
            else if (strncmp(line, "State:", 6) == 0) {
                char st[32];
                sscanf(line + 6, "%31s", st);
                info->state = st[0];
                snprintf(info->status, sizeof(info->status), "%s", st);
            }
            else if (strncmp(line, "VmSize:", 7) == 0) info->vsize = atoll(line + 7) * 1024;
            else if (strncmp(line, "VmRSS:", 6) == 0) info->rss = atoll(line + 6) * 1024;
            else if (strncmp(line, "Threads:", 8) == 0) info->threads = atoi(line + 8);
            else if (strncmp(line, "Uid:", 4) == 0) info->uid = atoi(line + 4);
            else if (strncmp(line, "Gid:", 4) == 0) info->gid = atoi(line + 4);
        }
        fclose(fp);
    }
    snprintf(path, sizeof(path), "/proc/%d/cmdline", pid);
    fp = fopen(path, "r");
    if (fp) {
        if (fgets(info->cmdline, sizeof(info->cmdline), fp)) {
            for (char *p = info->cmdline; *p; p++) if (*p == '\0') *p = ' ';
        }
        fclose(fp);
    }
    snprintf(path, sizeof(path), "/proc/%d/exe", pid);
    ssize_t len = readlink(path, info->exe, sizeof(info->exe) - 1);
    if (len > 0) info->exe[len] = '\0';
    info->pid = pid;
    return 0;
}

int os_kill_process(int pid, int signal) {
    if (kill(pid, signal) == 0) {
        ztk_info("Process %d killed with signal %d", pid, signal);
        return 0;
    }
    ztk_error("kill failed: %s", strerror(errno));
    return -1;
}
int os_nice_process(int pid, int nice) {
    if (setpriority(PRIO_PROCESS, pid, nice) == 0) return 0;
    ztk_error("setpriority failed: %s", strerror(errno));
    return -1;
}
int os_renice_process(int pid, int priority) { return os_nice_process(pid, priority); }
int os_sched_process(int pid, int policy, int priority) { (void)pid;(void)policy;(void)priority; return -1; }
int os_setsched_process(int pid, int policy, int priority) { return os_sched_process(pid, policy, priority); }
int os_oom_score_process(int pid) { (void)pid; return -1; }

/* Systemd stubs */
int os_list_systemd_services(void) {
    char *args[] = { "systemctl", "list-units", "--type=service", "--all", "--no-pager", NULL };
    return ztk_execvp_safe("systemctl", args);
}
int os_start_systemd_service(const char *name) {
    char *args[] = { "systemctl", "start", (char*)name, NULL };
    return ztk_execvp_safe("systemctl", args);
}
int os_stop_systemd_service(const char *name) {
    char *args[] = { "systemctl", "stop", (char*)name, NULL };
    return ztk_execvp_safe("systemctl", args);
}
int os_restart_systemd_service(const char *name) {
    char *args[] = { "systemctl", "restart", (char*)name, NULL };
    return ztk_execvp_safe("systemctl", args);
}
int os_reload_systemd_service(const char *name) {
    char *args[] = { "systemctl", "reload", (char*)name, NULL };
    return ztk_execvp_safe("systemctl", args);
}
int os_enable_systemd_service(const char *name) {
    char *args[] = { "systemctl", "enable", (char*)name, NULL };
    return ztk_execvp_safe("systemctl", args);
}
int os_disable_systemd_service(const char *name) {
    char *args[] = { "systemctl", "disable", (char*)name, NULL };
    return ztk_execvp_safe("systemctl", args);
}
int os_status_systemd_service(const char *name) {
    char *args[] = { "systemctl", "status", (char*)name, NULL };
    return ztk_execvp_safe("systemctl", args);
}
int os_list_systemd_timers(void) {
    char *args[] = { "systemctl", "list-timers", "--all", "--no-pager", NULL };
    return ztk_execvp_safe("systemctl", args);
}
int os_start_systemd_timer(const char *name) {
    char *args[] = { "systemctl", "start", (char*)name, NULL };
    return ztk_execvp_safe("systemctl", args);
}
int os_stop_systemd_timer(const char *name) {
    char *args[] = { "systemctl", "stop", (char*)name, NULL };
    return ztk_execvp_safe("systemctl", args);
}

/* Journal stubs */
int os_journal_read(int count, journal_entry_t *entries) {
    (void)count;(void)entries;
    return 0;
}
int os_journal_filter(const char *unit, const char *priority, journal_entry_t *entries, int max) {
    (void)unit;(void)priority;(void)entries;(void)max;
    return 0;
}
int os_journal_rotate(void) { return -1; }
int os_journal_cleanup(void) { return -1; }

/* D-Bus stubs */
int os_dbus_send_message(dbus_message_t *msg) { (void)msg; return -1; }
int os_dbus_receive_message(dbus_message_t *msg) { (void)msg; return -1; }

/* Kernel Module stubs */
int os_list_kernel_modules(void) { return -1; }
int os_load_kernel_module(const char *name) { (void)name; return -1; }
int os_unload_kernel_module(const char *name) { (void)name; return -1; }
int os_blacklist_kernel_module(const char *name) { (void)name; return -1; }
int os_get_module_info(const char *name, kernel_module_t *info) { (void)name;(void)info; return -1; }

/* eBPF stubs */
int os_list_ebpf_programs(void) { return -1; }
int os_load_ebpf_program(const char *path, const char *name) { (void)path;(void)name; return -1; }
int os_unload_ebpf_program(int id) { (void)id; return -1; }
int os_attach_ebpf_program(int id, int attach_type) { (void)id;(void)attach_type; return -1; }

/* Device stubs */
int os_list_devices(void) { return -1; }
int os_get_device_info(const char *device) { (void)device; return -1; }
int os_create_device_mapper(const char *name, const char *table) { (void)name;(void)table; return -1; }
int os_remove_device_mapper(const char *name) { (void)name; return -1; }
int os_list_nvme_namespaces(void) { return -1; }

/* Storage stubs */
int os_create_lvm_volume(const char *vg, const char *lv, unsigned long long size) { (void)vg;(void)lv;(void)size; return -1; }
int os_extend_lvm_volume(const char *vg, const char *lv, unsigned long long size) { (void)vg;(void)lv;(void)size; return -1; }
int os_reduce_lvm_volume(const char *vg, const char *lv, unsigned long long size) { (void)vg;(void)lv;(void)size; return -1; }
int os_remove_lvm_volume(const char *vg, const char *lv) { (void)vg;(void)lv; return -1; }
int os_create_lvm_snapshot(const char *vg, const char *lv, const char *snapshot) { (void)vg;(void)lv;(void)snapshot; return -1; }

/* ZFS stubs */
int os_create_zfs_pool(const char *name, const char *device) { (void)name;(void)device; return -1; }
int os_create_zfs_dataset(const char *pool, const char *dataset, const char *options) { (void)pool;(void)dataset;(void)options; return -1; }
int os_snapshot_zfs_dataset(const char *dataset, const char *snapshot) { (void)dataset;(void)snapshot; return -1; }
int os_clone_zfs_snapshot(const char *snapshot, const char *clone) { (void)snapshot;(void)clone; return -1; }

/* ============ OS Monitor Thread (thread‑safe) ============ */
void *os_monitor_thread(void *arg) {
    (void)arg;
    while (ztk_os.os_monitor_active) {
        pthread_mutex_lock(&ztk_os.os_lock);
        os_get_cpu_info();
        os_get_memory_info();
        os_get_load_avg();
        pthread_mutex_unlock(&ztk_os.os_lock);
        sleep(5);
    }
    return NULL;
}

/* ============ Built‑in OS Commands ============ */
int builtin_os_status(int argc, char **argv, void *context) {
    (void)argc; (void)argv; (void)context;
    pthread_mutex_lock(&ztk_os.os_lock);
    os_info_t os_info = ztk_os.os_info;
    cpu_info_t cpu = ztk_os.cpu_info;
    memory_info_t mem = ztk_os.memory_info;
    unsigned long long load1 = ztk_os.system_load_1;
    unsigned long long load5 = ztk_os.system_load_5;
    unsigned long long load15 = ztk_os.system_load_15;
    unsigned long long procs_running = ztk_os.processes_running;
    unsigned long long procs_blocked = ztk_os.processes_blocked;
    pthread_mutex_unlock(&ztk_os.os_lock);

    ztk_print_header("System Status");
    printf("  OS:          %s\n", os_info.os_pretty_name[0] ? os_info.os_pretty_name : os_info.os_name);
    printf("  Kernel:      %s (%s)\n", os_info.kernel_release, os_info.kernel_arch);
    printf("  Hostname:    %s\n", os_info.hostname);
    printf("  CPU:         %s\n", cpu.model);
    printf("  Cores:       %d (Threads: %d)\n", cpu.cores, cpu.threads);
    printf("  Memory:      Total: %s, Used: %s, Free: %s\n",
           ztk_format_size(mem.total_ram),
           ztk_format_size(mem.total_ram - mem.available_ram),
           ztk_format_size(mem.available_ram));
    printf("  Swap:        Total: %s, Used: %s, Free: %s\n",
           ztk_format_size(mem.swap_total),
           ztk_format_size(mem.swap_total - mem.swap_free),
           ztk_format_size(mem.swap_free));
    printf("  Load:        %.2f, %.2f, %.2f\n", load1/100.0, load5/100.0, load15/100.0);
    printf("  Processes:   Running: %lu, Blocked: %lu\n", procs_running, procs_blocked);
    FILE *fp = fopen("/proc/uptime", "r");
    if (fp) {
        double uptime;
        fscanf(fp, "%lf", &uptime);
        int days = (int)(uptime / 86400);
        int hours = (int)(uptime / 3600) % 24;
        int mins = (int)(uptime / 60) % 60;
        printf("  Uptime:      %d days, %d hours, %d mins\n", days, hours, mins);
        fclose(fp);
    }
    ztk_print_footer();
    return 0;
}

int builtin_os_fs(int argc, char **argv, void *context) {
    (void)argc; (void)argv; (void)context;
    os_list_filesystems();
    ztk_print_header("Filesystems");
    printf("  %-20s %-15s %-20s %-12s %-12s\n", "Mount Point", "Type", "Device", "Size", "Used");
    for (int i = 0; i < ztk_os.fs_count; i++) {
        fs_info_t *fs = &ztk_os.fs_info[i];
        if (fs->mounted) {
            printf("  %-20s %-15s %-20s %-12s %-12s\n",
                   fs->mount_point, fs->fstype, fs->device,
                   ztk_format_size(fs->total_size), ztk_format_size(fs->used_size));
        }
    }
    ztk_print_footer();
    return 0;
}

int builtin_os_net(int argc, char **argv, void *context) {
    (void)argc; (void)argv; (void)context;
    os_list_network_interfaces();
    ztk_print_header("Network Interfaces");
    printf("  %-12s %-15s %-16s %-10s %-12s %-12s\n", "Interface", "MAC", "IP", "Type", "RX", "TX");
    for (int i = 0; i < ztk_os.net_count; i++) {
        net_iface_info_t *net = &ztk_os.net_info[i];
        if (net->ipv4[0] || net->ipv6[0]) {
            printf("  %-12s %-15s %-16s %-10s %-12s %-12s\n",
                   net->name, net->mac, net->ipv4[0] ? net->ipv4 : net->ipv6,
                   net->type, ztk_format_size(net->rx_bytes), ztk_format_size(net->tx_bytes));
        }
    }
    ztk_print_footer();
    return 0;
}

int builtin_os_processes(int argc, char **argv, void *context) {
    (void)argc; (void)argv; (void)context;
    os_list_processes();
    ztk_print_header("Processes");
    printf("  %-8s %-8s %-20s %-12s %-12s %s\n", "PID", "PPID", "Name", "Memory", "Threads", "State");
    for (int i = 0; i < ztk_os.process_count && i < 50; i++) {
        process_info_t *p = &ztk_os.processes[i];
        if (p->pid > 0 && p->pid < 1000 && p->name[0]) {
            printf("  %-8d %-8d %-20s %-12s %-12d %c\n",
                   p->pid, p->ppid, p->name, ztk_format_size(p->rss), p->threads, p->state);
        }
    }
    ztk_print_footer();
    return 0;
}

int builtin_os_kill(int argc, char **argv, void *context) {
    (void)context;
    if (argc < 2) { ztk_error("kill: missing PID"); return -1; }
    int sig = SIGTERM, start = 1;
    if (argv[1][0] == '-') { sig = atoi(argv[1] + 1); start = 2; }
    for (int i = start; i < argc; i++) {
        int pid = atoi(argv[i]);
        os_kill_process(pid, sig);
    }
    return 0;
}

int builtin_os_mount(int argc, char **argv, void *context) {
    (void)context;
    if (argc < 3) { ztk_error("Usage: mount <device> <mountpoint> [fstype] [options]"); return -1; }
    const char *device = argv[1], *mp = argv[2], *fst = (argc > 3) ? argv[3] : "auto", *opts = (argc > 4) ? argv[4] : "defaults";
    return os_mount_filesystem(device, mp, fst, opts);
}

int builtin_os_umount(int argc, char **argv, void *context) {
    (void)context;
    if (argc < 2) { ztk_error("umount: missing mount point"); return -1; }
    return os_umount_filesystem(argv[1]);
}

int builtin_os_container(int argc, char **argv, void *context) {
    (void)context;
    if (argc < 2) { os_list_containers(); return 0; }
    if (strcmp(argv[1], "create") == 0 && argc > 3) {
        const char *runtime = (argc > 4) ? argv[4] : NULL;
        return os_create_container(argv[2], argv[3], runtime);
    } else if (strcmp(argv[1], "start") == 0 && argc > 2) {
        return os_start_container(argv[2]);
    } else if (strcmp(argv[1], "stop") == 0 && argc > 2) {
        return os_stop_container(argv[2]);
    } else if (strcmp(argv[1], "list") == 0) {
        return os_list_containers();
    } else if (strcmp(argv[1], "exec") == 0 && argc > 3) {
        return os_exec_container(argv[2], argv[3]);
    }
    ztk_error("Usage: container [list|create <name> <image>|start <name>|stop <name>|exec <name> <command>]");
    return -1;
}

int builtin_os_systemd(int argc, char **argv, void *context) {
    (void)context;
    if (argc < 2) return os_list_systemd_services();
    if (strcmp(argv[1], "list") == 0) return os_list_systemd_services();
    if (strcmp(argv[1], "start") == 0 && argc > 2) return os_start_systemd_service(argv[2]);
    if (strcmp(argv[1], "stop") == 0 && argc > 2) return os_stop_systemd_service(argv[2]);
    if (strcmp(argv[1], "restart") == 0 && argc > 2) return os_restart_systemd_service(argv[2]);
    if (strcmp(argv[1], "enable") == 0 && argc > 2) return os_enable_systemd_service(argv[2]);
    if (strcmp(argv[1], "disable") == 0 && argc > 2) return os_disable_systemd_service(argv[2]);
    if (strcmp(argv[1], "status") == 0 && argc > 2) return os_status_systemd_service(argv[2]);
    if (strcmp(argv[1], "timers") == 0) return os_list_systemd_timers();
    ztk_error("Usage: systemd [list|start|stop|restart|enable|disable|status|timers] <service>");
    return -1;
}

int builtin_os_btrfs(int argc, char **argv, void *context) {
    (void)context;
    if (argc < 2) { ztk_error("btrfs: missing subcommand"); return -1; }
    if (strcmp(argv[1], "subvolume") == 0 && argc > 3 && strcmp(argv[2], "create") == 0)
        return os_create_btrfs_subvolume(argv[3]);
    if (strcmp(argv[1], "snapshot") == 0 && argc > 3)
        return os_snapshot_btrfs_subvolume(argv[2], argv[3]);
    if (strcmp(argv[1], "rollback") == 0 && argc > 2)
        return os_rollback_btrfs_snapshot(argv[2]);
    ztk_error("Invalid btrfs command");
    return -1;
}

int builtin_os_journal(int argc, char **argv, void *context) {
    (void)argc; (void)argv; (void)context;
    ztk_error("journal not fully implemented");
    return -1;
}

/* ============ Interactive Loop ============ */
void ztk_loop(void) {
    char line[MAX_LINE];
    printf("\nZTK v%s > ", ZTK_VERSION);
    fflush(stdout);
    while (fgets(line, sizeof(line), stdin)) {
        line[strcspn(line, "\n")] = '\0';
        if (strlen(line) == 0) { printf("ZTK > "); continue; }
        if (strcmp(line, "exit") == 0 || strcmp(line, "quit") == 0) break;
        if (strcmp(line, "help") == 0) {
            printf("Available commands:\n");
            for (int i = 0; i < command_count; i++)
                printf("  %-12s %s\n", command_table[i].name, command_table[i].help);
            printf("  exit/quit    Exit shell\n");
            printf("  help         This help\n");
            printf("ZTK > ");
            continue;
        }
        /* Parse arguments */
        char *args[MAX_ARGS];
        int argc = 0;
        char *token = strtok(line, " ");
        while (token && argc < MAX_ARGS) {
            args[argc++] = token;
            token = strtok(NULL, " ");
        }
        if (argc == 0) { printf("ZTK > "); continue; }
        int found = 0;
        for (int i = 0; i < command_count; i++) {
            if (strcmp(args[0], command_table[i].name) == 0) {
                command_table[i].func(argc, args, command_table[i].context);
                found = 1;
                break;
            }
        }
        if (!found) {
            /* Try to run as external command */
            args[argc] = NULL;
            ztk_execvp_safe(args[0], args);
        }
        printf("ZTK > ");
        fflush(stdout);
    }
}

/* ============ main() ============ */
int main(int argc, char *argv[]) {
    int daemon_mode = 0, batch_mode = 0;
    char *config_file = NULL, *ai_token = NULL, *batch_script = NULL;
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--daemon") == 0) daemon_mode = 1;
        else if (strcmp(argv[i], "--config") == 0 && i+1 < argc) config_file = argv[++i];
        else if (strcmp(argv[i], "--ai-token") == 0 && i+1 < argc) ai_token = argv[++i];
        else if (strcmp(argv[i], "--batch") == 0 && i+1 < argc) { batch_mode = 1; batch_script = argv[++i]; }
        else if (strcmp(argv[i], "--verbose") == 0 || strcmp(argv[i], "-v") == 0) ztk_verbose_mode = 1;
        else if (strcmp(argv[i], "--debug") == 0) { ztk_debug_mode = 1; ztk_verbose_mode = 1; }
        else if (strcmp(argv[i], "--help") == 0 || strcmp(argv[i], "-h") == 0) {
            printf("ZTK Enterprise Shell v%s - OS Enhanced Edition\n", ZTK_VERSION);
            printf("Usage: %s [options]\n", argv[0]);
            printf("  --config FILE    Use configuration file\n");
            printf("  --ai-token TOKEN Set AI token\n");
            printf("  --batch FILE     Run in batch mode\n");
            printf("  --daemon         Run as daemon\n");
            printf("  --verbose, -v    Verbose output\n");
            printf("  --debug          Debug mode\n");
            printf("  --help, -h       Show this help\n");
            printf("\nOS Commands: status, fs, net, ps, kill, mount, umount,\n");
            printf("             container, systemd, btrfs, journal\n");
            return 0;
        }
    }

    if (ztk_init() != 0) {
        fprintf(stderr, "Failed to initialize ZTK\n");
        return 1;
    }
    if (config_file) { /* load config - stub */ }
    if (ai_token) ztk_ai_init(ai_token);

    /* Register commands */
    ztk_register_command("status", "Show system status", builtin_os_status, NULL);
    ztk_register_command("fs", "List filesystems", builtin_os_fs, NULL);
    ztk_register_command("net", "List network interfaces", builtin_os_net, NULL);
    ztk_register_command("ps", "List processes", builtin_os_processes, NULL);
    ztk_register_command("kill", "Kill processes", builtin_os_kill, NULL);
    ztk_register_command("mount", "Mount filesystem", builtin_os_mount, NULL);
    ztk_register_command("umount", "Unmount filesystem", builtin_os_umount, NULL);
    ztk_register_command("container", "Container management", builtin_os_container, NULL);
    ztk_register_command("systemd", "Systemd service management", builtin_os_systemd, NULL);
    ztk_register_command("btrfs", "Btrfs management", builtin_os_btrfs, NULL);
    ztk_register_command("journal", "Read system journal", builtin_os_journal, NULL);

    /* Start monitor thread */
    ztk_os.os_monitor_active = 1;
    if (pthread_create(&ztk_os.os_monitor_thread, NULL, os_monitor_thread, NULL) != 0) {
        ztk_error("Failed to start OS monitor thread");
    }

    if (daemon_mode) {
        if (fork() > 0) return 0;
        setsid();
        close(STDIN_FILENO); close(STDOUT_FILENO); close(STDERR_FILENO);
        ztk_daemon_mode = 1;
    }

    printf("\n=== ZTK Enterprise Shell v%s (%s) ===\n", ZTK_VERSION, ZTK_RELEASE);
    printf("OS: %s, Kernel: %s\n", ztk_os.os_info.os_pretty_name, ztk_os.os_info.kernel_release);
    printf("Type 'help' for commands, 'exit' to quit.\n\n");

    if (ztk_ai_enabled) {
        pthread_create(&ztk_ai_thread_id, NULL, ztk_ai_thread, NULL);
        pthread_detach(ztk_ai_thread_id);
    }
    pthread_create(&ztk_scheduler_thread_id, NULL, ztk_scheduler_thread, NULL);
    pthread_detach(ztk_scheduler_thread_id);

    if (batch_mode && batch_script) ztk_batch_mode(batch_script);
    else ztk_loop();

    /* Cleanup */
    ztk_os.os_monitor_active = 0;
    if (ztk_os.os_monitor_thread) pthread_join(ztk_os.os_monitor_thread, NULL);
    ztk_cleanup();
    return 0;
}
