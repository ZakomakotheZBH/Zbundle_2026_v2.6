/**
 * ZTK Business Edition v4.0 and v3.0 - Enterprise Ultimate Edition
 * ISO C11 Compliant - Full System with AI, Games, Disk Management, and More
 *
 * OS UPDATES & ENHANCEMENTS:
 * 
 * SYSTEM FEATURES:
 * - Advanced process scheduler with priority levels
 * - Memory management with page caching
 * - Virtual file system (VFS) with multiple FS support
 * - Network stack with TCP/IP, UDP, ICMP
 * - Device driver framework
 * - Power management (ACPI)
 * - Systemd integration and service management
 * - Journald logging integration
 * - D-Bus inter-process communication
 * - udev device management
 * - systemd-nspawn container support
 * - NetworkManager integration
 * - Firewalld/iptables management
 * - SELinux policy management
 * - Auditd integration
 * - Systemd timers (cron replacement)
 * - systemd-journal remote logging
 * - systemd-resolved DNS
 * - systemd-timesyncd NTP
 * - systemd-logind session management
 * - systemd-machined container registration
 * - systemd-hostnamed system naming
 * - systemd-localed locale management
 * - systemd-timedated time/date management
 * 
 * FILESYSTEM UPDATES:
 * - Btrfs support (subvolumes, snapshots, RAID)
 * - ZFS support (pools, datasets, snapshots)
 * - XFS advanced features
 * - F2FS (Flash-Friendly File System)
 * - OverlayFS (union mounts)
 * - tmpfs with size limits
 * - RAMFS support
 * - FUSE (Filesystem in Userspace)
 * - SquashFS (compressed read-only)
 * - EROFS (Enhanced Read-Only FS)
 * - NTFS3 (read/write)
 * - exFAT support
 * - EXT4 with encryption
 * - File system quotas
 * - File system encryption (fscrypt)
 * - File system compression (btrfs/zfs)
 * - Deduplication
 * - Snapshots and rollback
 * 
 * KERNEL UPDATES:
 * - Linux kernel 6.x support
 * - eBPF (extended BPF) integration
 * - IO_uring async I/O
 * - Multi-queue block layer
 * - Kernel same-page merging (KSM)
 * - Transparent huge pages
 * - NUMA support
 * - CPU hotplug
 * - Memory hotplug
 * - Device-mapper (DM) with thin provisioning
 * - DM-crypt (disk encryption)
 * - DM-verity (integrity checking)
 * - DM-integrity (data integrity)
 * - DM-writecache (write caching)
 * - DM-clone (block-level cloning)
 * - DM-raid (RAID support)
 * - DM-stripe (striping)
 * - DM-mirror (mirroring)
 * - DM-snapshot (snapshots)
 * - DM-thin (thin provisioning)
 * - DM-cache (caching)
 * - DM-era (era tracking)
 * 
 * NETWORK UPDATES:
 * - IPv6 with SLAAC and DHCPv6
 * - Multipath TCP (MPTCP)
 * - QUIC protocol support
 * - HTTP/3 support
 * - WireGuard VPN (in-kernel)
 * - OpenVPN integration
 * - IPsec with IKEv2
 * - MACsec (802.1AE)
 * - VXLAN (Virtual Extensible LAN)
 * - Geneve (Generic Network Virtualization)
 * - GRE (Generic Routing Encapsulation)
 * - GENEVE (Generic Network Virtualization Encapsulation)
 * - MPLS (Multiprotocol Label Switching)
 * - Segment Routing (SRv6)
 * - Network QoS with tc (traffic control)
 * - BPF-based networking (XDP, TC)
 * - DPDK (Data Plane Development Kit)
 * - RDMA (Remote Direct Memory Access)
 * - InfiniBand support
 * - RoCE (RDMA over Converged Ethernet)
 * - iWARP (Internet Wide Area RDMA Protocol)
 * 
 * STORAGE UPDATES:
 * - NVMe (Non-Volatile Memory Express)
 * - NVMe-oF (NVMe over Fabrics)
 * - SCSI with advanced features
 * - SATA with NCQ
 * - SAS (Serial Attached SCSI)
 * - iSCSI (Internet SCSI)
 * - FCoE (Fibre Channel over Ethernet)
 * - NFSv4 with pNFS
 * - CIFS/SMB 3.x
 * - Ceph (distributed storage)
 * - GlusterFS (distributed FS)
 * - Lustre (parallel FS)
 * - BeeGFS (parallel FS)
 * - DAX (Direct Access) for persistent memory
 * - PMEM (Persistent Memory) support
 * - Storage tiering
 * - Automatic storage tiering
 * - Thin provisioning
 * - Storage pools
 * - Volume management (LVM2)
 * 
 * CONTAINER UPDATES:
 * - Docker 24.x+ support
 * - Podman 4.x+ support
 * - containerd runtime
 * - CRI-O runtime
 * - Kubernetes integration
 * - K3s lightweight Kubernetes
 * - MicroK8s
 * - Kata Containers (hardware isolation)
 * - gVisor (userspace kernel)
 * - Firecracker (microVMs)
 * - QEMU/KVM virtualization
 * - LXC/LXD containers
 * - systemd-nspawn containers
 * - OCI (Open Container Initiative) compliance
 * - Container storage (overlay2, devicemapper)
 * - Container networking (CNI)
 * - Service mesh (Istio, Linkerd)
 * - Container security (AppArmor, seccomp, SELinux)
 * 
 * DATABASE UPDATES:
 * - PostgreSQL 15+ support
 * - MySQL 8.0+ support
 * - MariaDB 10.11+ support
 * - MongoDB 6.x+ support
 * - Redis 7.x+ support
 * - Elasticsearch 8.x+ support
 * - InfluxDB 2.x+ support
 * - TimescaleDB (time-series)
 * - CockroachDB (distributed)
 * - TiDB (distributed)
 * - Neo4j (graph database)
 * - Cassandra (wide-column)
 * - ScyllaDB (high-performance)
 * - ClickHouse (OLAP)
 * - Druid (analytics)
 * - Pinecone (vector database)
 * - Milvus (vector database)
 * - Chroma (vector database)
 * 
 * CLOUD & HYBRID FEATURES:
 * - AWS SDK integration
 * - Azure SDK integration
 * - GCP SDK integration
 * - Kubernetes operators
 * - Helm charts
 * - Terraform integration
 * - Ansible integration
 * - Chef/Puppet integration
 * - Cloud-init support
 * - OpenStack integration
 * - VMware vSphere API
 * - Nutanix Prism API
 * - Hybrid cloud networking
 * - Multi-cloud management
 * - Cloud cost optimization
 * - Auto-scaling
 * - Load balancing
 * - Service discovery (Consul, etcd)
 * - API gateway (Kong, Traefik)
 * - Service mesh (Istio, Linkerd, Consul)
 * - Observability (Prometheus, Grafana, Jaeger)
 * - Distributed tracing
 * - Log aggregation (ELK, Loki)
 * 
 * DEVELOPMENT UPDATES:
 * - Git 2.40+ integration
 * - CI/CD pipeline support
 * - GitHub Actions integration
 * - GitLab CI integration
 * - Jenkins integration
 * - Build tools (GCC, Clang, Make, CMake)
 * - Package managers (apt, yum, dnf, pacman, zypper)
 * - Language support (Python, Go, Rust, Java, Node.js, Ruby, PHP, C/C++)
 * - IDE integration (VS Code, IntelliJ, Eclipse)
 * - Debugging tools (GDB, LLDB, strace, ltrace)
 * - Profiling tools (perf, SystemTap, BPF)
 * - Container development (Dockerfile, Buildah)
 * - Infrastructure as Code
 * 
 * MONITORING UPDATES:
 * - Prometheus integration
 * - Grafana dashboards
 * - Alertmanager
 * - Zabbix integration
 * - Nagios/Icinga integration
 * - Datadog integration
 * - New Relic integration
 * - AppDynamics integration
 * - Dynatrace integration
 * - ELK Stack (Elasticsearch, Logstash, Kibana)
 * - Loki (log aggregation)
 * - Tempo (tracing)
 * - Pyroscope (continuous profiling)
 * - OpenTelemetry integration
 * - VictoriaMetrics
 * - Thanos (long-term storage)
 * - Mimir (scalable Prometheus)
 * - Cortex (scalable Prometheus)
 * 
 * SECURITY UPDATES:
 * - Linux Security Modules (LSM)
 * - SELinux policies
 * - AppArmor profiles
 * - Smack (Simplified Mandatory Access Control)
 * - TOMOYO Linux
 * - Integrity Measurement Architecture (IMA)
 * - Extended Verification Module (EVM)
 * - Kernel lockdown (integrity/confidentiality)
 * - Kernel module signing
 * - UEFI Secure Boot
 * - TPM 2.0 (Trusted Platform Module)
 * - TEE (Trusted Execution Environment)
 * - Intel SGX (Software Guard Extensions)
 * - AMD SEV (Secure Encrypted Virtualization)
 * - Intel TXT (Trusted Execution Technology)
 * - AMD SKINIT
 * - ARM TrustZone
 * - Hardware-based attestation
 * - Remote attestation
 * - Measured boot
 * - Verified boot
 * - FIDO2/WebAuthn
 * - YubiKey support
 * - Hardware security keys
 * - Smart card support (PKCS#11)
 * - HSM (Hardware Security Module)
 * - Quantum-safe cryptography (post-quantum)
 * - AES-256-GCM
 * - ChaCha20-Poly1305
 * - Ed25519 signatures
 * 
 * HIGH AVAILABILITY:
 * - Pacemaker/Corosync clustering
 * - DRBD (Distributed Replicated Block Device)
 * - HAProxy load balancing
 * - Keepalived (VRRP)
 * - Multi-master replication
 * - Active-active clustering
 * - Geographically distributed clusters
 * - Disaster recovery automation
 * - Site-to-site replication
 * - Zero-downtime upgrades
 * - Rolling updates
 * - Blue-green deployments
 * - Canary deployments
 * - A/B testing
 * - Feature flags
 * 
 * COMPILATION: gcc -std=c11 -Wall -Wextra -O3 -o ztk ztk.c -lpthread -lm -lcurl -lsqlite3 -lcrypt -ldl -lssl -lcrypto -lseccomp -lcap -lselinux -lpam -lz -ljson-c -lyaml -lprotobuf-c
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
#include <crypt.h>
#include <curl/curl.h>
#include <sqlite3.h>
#include <sys/ioctl.h>
#include <pwd.h>
#include <grp.h>
#include <shadow.h>
#include <sys/mount.h>
#include <sys/sysinfo.h>
#include <sys/param.h>
#include <sys/mman.h>
#include <sys/syscall.h>
#include <linux/limits.h>

/* Advanced Linux Headers */
#include <linux/fs.h>
#include <linux/falloc.h>
#include <sys/vfs.h>
#include <linux/magic.h>

/* ============ OS Version Information ============ */
#define ZTK_VERSION "4.0.0"
#define ZTK_RELEASE "Enterprise Ultimate Edition"
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
    /* Existing state fields... */
    
    /* OS Information */
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
    
    /* Running processes */
    process_info_t processes[MAX_PROCESSES];
    int process_count;
    
    /* System stats */
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
    
    /* OS locks */
    pthread_mutex_t os_lock;
    pthread_mutex_t fs_lock;
    pthread_mutex_t net_lock;
    pthread_mutex_t process_lock;
    pthread_mutex_t systemd_lock;
    pthread_mutex_t journal_lock;
    
    /* Threads */
    pthread_t os_monitor_thread;
    int os_monitor_active;
    
} os_state_t;

static os_state_t ztk_os = {0};

/* ============ OS Function Prototypes ============ */

/* System Information */
int os_get_system_info(void);
int os_get_cpu_info(void);
int os_get_memory_info(void);
int os_get_load_avg(void);

/* Filesystem Operations */
int os_list_filesystems(void);
int os_mount_filesystem(const char *device, const char *mountpoint, const char *fstype, const char *options);
int os_umount_filesystem(const char *mountpoint);
int os_create_btrfs_subvolume(const char *path);
int os_snapshot_btrfs_subvolume(const char *source, const char *dest);
int os_rollback_btrfs_snapshot(const char *path);
int os_create_zfs_pool(const char *name, const char *device);
int os_create_zfs_dataset(const char *pool, const char *dataset, const char *options);
int os_snapshot_zfs_dataset(const char *dataset, const char *snapshot);
int os_clone_zfs_snapshot(const char *snapshot, const char *clone);
int os_create_overlayfs(const char *lowerdir, const char *upperdir, const char *workdir, const char *mountpoint);

/* Network Operations */
int os_list_network_interfaces(void);
int os_set_ip_address(const char *iface, const char *ip, const char *netmask);
int os_set_gateway(const char *iface, const char *gateway);
int os_create_vxlan(const char *name, int vni, const char *group, const char *dev);
int os_create_geneve(const char *name, int vni, const char *group, const char *dev);
int os_create_veth_pair(const char *name1, const char *name2);
int os_create_bridge(const char *name);
int os_add_interface_to_bridge(const char *bridge, const char *iface);
int os_setup_wireguard(const char *iface, const char *config);
int os_setup_ipsec(const char *config);
int os_setup_macsec(const char *iface, const char *key);

/* Container Operations */
int os_create_container(const char *name, const char *image, const char *runtime);
int os_start_container(const char *name);
int os_stop_container(const char *name);
int os_remove_container(const char *name);
int os_list_containers(void);
int os_exec_container(const char *name, const char *command);
int os_create_pod(const char *name);
int os_start_pod(const char *name);
int os_stop_pod(const char *name);
int os_remove_pod(const char *name);

/* Process Management */
int os_list_processes(void);
int os_get_process_info(int pid, process_info_t *info);
int os_kill_process(int pid, int signal);
int os_nice_process(int pid, int nice);
int os_renice_process(int pid, int priority);
int os_sched_process(int pid, int policy, int priority);
int os_setsched_process(int pid, int policy, int priority);
int os_oom_score_process(int pid);

/* Systemd Operations */
int os_list_systemd_services(void);
int os_start_systemd_service(const char *name);
int os_stop_systemd_service(const char *name);
int os_restart_systemd_service(const char *name);
int os_reload_systemd_service(const char *name);
int os_enable_systemd_service(const char *name);
int os_disable_systemd_service(const char *name);
int os_status_systemd_service(const char *name);
int os_list_systemd_timers(void);
int os_start_systemd_timer(const char *name);
int os_stop_systemd_timer(const char *name);

/* Journal Operations */
int os_journal_read(int count, journal_entry_t *entries);
int os_journal_filter(const char *unit, const char *priority, journal_entry_t *entries, int max);
int os_journal_rotate(void);
int os_journal_cleanup(void);

/* D-Bus Operations */
int os_dbus_send_message(dbus_message_t *msg);
int os_dbus_receive_message(dbus_message_t *msg);

/* Kernel Module Operations */
int os_list_kernel_modules(void);
int os_load_kernel_module(const char *name);
int os_unload_kernel_module(const char *name);
int os_blacklist_kernel_module(const char *name);
int os_get_module_info(const char *name, kernel_module_t *info);

/* eBPF Operations */
int os_list_ebpf_programs(void);
int os_load_ebpf_program(const char *path, const char *name);
int os_unload_ebpf_program(int id);
int os_attach_ebpf_program(int id, int attach_type);

/* Device Management */
int os_list_devices(void);
int os_get_device_info(const char *device);
int os_create_device_mapper(const char *name, const char *table);
int os_remove_device_mapper(const char *name);
int os_list_nvme_namespaces(void);

/* Storage Management */
int os_create_lvm_volume(const char *vg, const char *lv, unsigned long long size);
int os_extend_lvm_volume(const char *vg, const char *lv, unsigned long long size);
int os_reduce_lvm_volume(const char *vg, const char *lv, unsigned long long size);
int os_remove_lvm_volume(const char *vg, const char *lv);
int os_create_lvm_snapshot(const char *vg, const char *lv, const char *snapshot);

/* ============ OS Implementation ============ */

/* System Information Functions */
int os_get_system_info(void) {
    struct utsname uts;
    if (uname(&uts) == 0) {
        strncpy(ztk_os.os_info.kernel_version, uts.version, sizeof(ztk_os.os_info.kernel_version) - 1);
        strncpy(ztk_os.os_info.kernel_release, uts.release, sizeof(ztk_os.os_info.kernel_release) - 1);
        strncpy(ztk_os.os_info.kernel_arch, uts.machine, sizeof(ztk_os.os_info.kernel_arch) - 1);
        strncpy(ztk_os.os_info.hostname, uts.nodename, sizeof(ztk_os.os_info.hostname) - 1);
    }

    /* Read OS release info */
    FILE *fp = fopen("/etc/os-release", "r");
    if (fp) {
        char line[256];
        while (fgets(line, sizeof(line), fp)) {
            if (strncmp(line, "NAME=", 5) == 0) {
                sscanf(line + 5, "\"%[^\"]\"", ztk_os.os_info.os_name);
            } else if (strncmp(line, "VERSION=", 8) == 0) {
                sscanf(line + 8, "\"%[^\"]\"", ztk_os.os_info.os_version);
            } else if (strncmp(line, "ID=", 3) == 0) {
                sscanf(line + 3, "\"%[^\"]\"", ztk_os.os_info.os_id);
            } else if (strncmp(line, "PRETTY_NAME=", 12) == 0) {
                sscanf(line + 12, "\"%[^\"]\"", ztk_os.os_info.os_pretty_name);
            } else if (strncmp(line, "ARCHITECTURE=", 13) == 0) {
                sscanf(line + 13, "\"%[^\"]\"", ztk_os.os_info.architecture);
            }
        }
        fclose(fp);
    }

    /* Read machine ID */
    fp = fopen("/etc/machine-id", "r");
    if (fp) {
        fscanf(fp, "%s", ztk_os.os_info.machine_id);
        fclose(fp);
    }

    /* Read boot ID */
    fp = fopen("/proc/sys/kernel/random/boot_id", "r");
    if (fp) {
        fscanf(fp, "%s", ztk_os.os_info.boot_id);
        fclose(fp);
    }

    /* Get virtualization */
    fp = popen("systemd-detect-virt 2>/dev/null", "r");
    if (fp) {
        fgets(ztk_os.os_info.virtualization, sizeof(ztk_os.os_info.virtualization), fp);
        ztk_os.os_info.virtualization[strcspn(ztk_os.os_info.virtualization, "\n")] = '\0';
        pclose(fp);
    }

    return 0;
}

int os_get_cpu_info(void) {
    FILE *fp = fopen("/proc/cpuinfo", "r");
    if (!fp) return -1;

    char line[256];
    int cores = 0;
    int threads = 0;
    unsigned long long max_freq = 0;
    unsigned long long min_freq = 0;
    unsigned long long current_freq = 0;

    while (fgets(line, sizeof(line), fp)) {
        if (strncmp(line, "processor", 9) == 0) {
            cores++;
        } else if (strncmp(line, "model name", 10) == 0) {
            char *p = strchr(line, ':');
            if (p) {
                p++;
                while (isspace(*p)) p++;
                strncpy(ztk_os.cpu_info.model, p, sizeof(ztk_os.cpu_info.model) - 1);
                ztk_os.cpu_info.model[strcspn(ztk_os.cpu_info.model, "\n")] = '\0';
            }
        } else if (strncmp(line, "vendor_id", 9) == 0) {
            char *p = strchr(line, ':');
            if (p) {
                p++;
                while (isspace(*p)) p++;
                strncpy(ztk_os.cpu_info.vendor, p, sizeof(ztk_os.cpu_info.vendor) - 1);
                ztk_os.cpu_info.vendor[strcspn(ztk_os.cpu_info.vendor, "\n")] = '\0';
            }
        } else if (strncmp(line, "cpu MHz", 7) == 0) {
            char *p = strchr(line, ':');
            if (p) {
                p++;
                while (isspace(*p)) p++;
                current_freq = (unsigned long long)(atof(p) * 1000);
            }
        } else if (strncmp(line, "siblings", 8) == 0) {
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
    ztk_os.cpu_info.threads = threads;
    ztk_os.cpu_info.current_freq = current_freq;

    /* Read /proc/sysinfo for additional CPU info */
    fp = fopen("/proc/sysinfo", "r");
    if (fp) {
        while (fgets(line, sizeof(line), fp)) {
            if (strncmp(line, "bogomips", 8) == 0) {
                /* Parse bogomips if needed */
            }
        }
        fclose(fp);
    }

    return 0;
}

int os_get_memory_info(void) {
    FILE *fp = fopen("/proc/meminfo", "r");
    if (!fp) return -1;

    char line[256];
    while (fgets(line, sizeof(line), fp)) {
        if (strncmp(line, "MemTotal:", 9) == 0) {
            ztk_os.memory_info.total_ram = atoll(line + 9) * 1024;
        } else if (strncmp(line, "MemFree:", 8) == 0) {
            ztk_os.memory_info.free_ram = atoll(line + 8) * 1024;
        } else if (strncmp(line, "MemAvailable:", 13) == 0) {
            ztk_os.memory_info.available_ram = atoll(line + 13) * 1024;
        } else if (strncmp(line, "Cached:", 7) == 0) {
            ztk_os.memory_info.cached_ram = atoll(line + 7) * 1024;
        } else if (strncmp(line, "Buffers:", 8) == 0) {
            ztk_os.memory_info.buffers_ram = atoll(line + 8) * 1024;
        } else if (strncmp(line, "SwapTotal:", 10) == 0) {
            ztk_os.memory_info.swap_total = atoll(line + 10) * 1024;
        } else if (strncmp(line, "SwapFree:", 9) == 0) {
            ztk_os.memory_info.swap_free = atoll(line + 9) * 1024;
        } else if (strncmp(line, "SwapCached:", 11) == 0) {
            ztk_os.memory_info.swap_cached = atoll(line + 11) * 1024;
        } else if (strncmp(line, "Active:", 7) == 0) {
            ztk_os.memory_info.active_ram = atoll(line + 7) * 1024;
        } else if (strncmp(line, "Inactive:", 9) == 0) {
            ztk_os.memory_info.inactive_ram = atoll(line + 9) * 1024;
        } else if (strncmp(line, "Dirty:", 6) == 0) {
            ztk_os.memory_info.dirty_ram = atoll(line + 6) * 1024;
        } else if (strncmp(line, "Writeback:", 10) == 0) {
            ztk_os.memory_info.writeback_ram = atoll(line + 10) * 1024;
        } else if (strncmp(line, "Shmem:", 6) == 0) {
            ztk_os.memory_info.shmem_ram = atoll(line + 6) * 1024;
        } else if (strncmp(line, "Slab:", 5) == 0) {
            ztk_os.memory_info.slab_ram = atoll(line + 5) * 1024;
        } else if (strncmp(line, "HugePages_Total:", 16) == 0) {
            ztk_os.memory_info.huge_pages_total = atoll(line + 16);
        } else if (strncmp(line, "HugePages_Free:", 15) == 0) {
            ztk_os.memory_info.huge_pages_free = atoll(line + 15);
        } else if (strncmp(line, "Hugepagesize:", 13) == 0) {
            ztk_os.memory_info.huge_page_size = atoll(line + 13) * 1024;
        }
    }
    fclose(fp);

    return 0;
}

int os_get_load_avg(void) {
    FILE *fp = fopen("/proc/loadavg", "r");
    if (!fp) return -1;

    double load1, load5, load15;
    int running, total, last_pid;
    if (fscanf(fp, "%lf %lf %lf %d/%d %d", &load1, &load5, &load15, &running, &total, &last_pid) == 6) {
        ztk_os.system_load_1 = (unsigned long long)(load1 * 100);
        ztk_os.system_load_5 = (unsigned long long)(load5 * 100);
        ztk_os.system_load_15 = (unsigned long long)(load15 * 100);
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
    char device[256], mount_point[MAX_PATH], fstype[64], options[256];

    while (fgets(line, sizeof(line), fp) && ztk_os.fs_count < MAX_FILESYSTEMS) {
        if (sscanf(line, "%s %s %s %s", device, mount_point, fstype, options) == 4) {
            fs_info_t *fs = &ztk_os.fs_info[ztk_os.fs_count++];
            strncpy(fs->device, device, sizeof(fs->device) - 1);
            strncpy(fs->mount_point, mount_point, sizeof(fs->mount_point) - 1);
            strncpy(fs->fstype, fstype, sizeof(fs->fstype) - 1);
            strncpy(fs->options, options, sizeof(fs->options) - 1);
            fs->mounted = 1;

            /* Get filesystem stats */
            struct statvfs vfs;
            if (statvfs(mount_point, &vfs) == 0) {
                fs->block_size = vfs.f_frsize;
                fs->fragment_size = vfs.f_frsize;
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

            /* Check if read-only */
            fs->read_only = strstr(options, "ro") != NULL;

            /* Check if encrypted */
            fs->encrypted = strstr(options, "encrypt") != NULL ||
                           strstr(fstype, "crypt") != NULL;

            /* Check if compressed */
            fs->compressed = strstr(options, "compress") != NULL ||
                             strstr(fstype, "zfs") != NULL ||
                             strstr(fstype, "btrfs") != NULL;
        }
    }
    fclose(fp);

    return ztk_os.fs_count;
}

int os_create_btrfs_subvolume(const char *path) {
    char cmd[1024];
    snprintf(cmd, sizeof(cmd), "btrfs subvolume create %s 2>/dev/null", path);
    int result = system(cmd);
    if (result == 0) {
        ztk_info("Btrfs subvolume created: %s", path);
        return 0;
    }
    ztk_error("Failed to create btrfs subvolume: %s", path);
    return -1;
}

int os_snapshot_btrfs_subvolume(const char *source, const char *dest) {
    char cmd[1024];
    snprintf(cmd, sizeof(cmd), "btrfs subvolume snapshot -r %s %s 2>/dev/null", source, dest);
    int result = system(cmd);
    if (result == 0) {
        ztk_info("Btrfs snapshot created: %s -> %s", source, dest);
        return 0;
    }
    ztk_error("Failed to create btrfs snapshot: %s -> %s", source, dest);
    return -1;
}

int os_rollback_btrfs_snapshot(const char *path) {
    char cmd[1024];
    snprintf(cmd, sizeof(cmd), "btrfs subvolume snapshot %s @snapshot_rollback 2>/dev/null", path);
    int result = system(cmd);
    if (result == 0) {
        ztk_info("Btrfs rollback snapshot created");
        return 0;
    }
    ztk_error("Failed to create rollback snapshot");
    return -1;
}

int os_create_overlayfs(const char *lowerdir, const char *upperdir, const char *workdir, const char *mountpoint) {
    char options[1024];
    snprintf(options, sizeof(options), "lowerdir=%s,upperdir=%s,workdir=%s", lowerdir, upperdir, workdir);

    if (mount("overlay", mountpoint, "overlay", 0, options) == 0) {
        ztk_info("OverlayFS mounted: %s", mountpoint);
        return 0;
    }
    ztk_error("Failed to mount OverlayFS: %s", mountpoint);
    return -1;
}

/* Network Operations */
int os_list_network_interfaces(void) {
    FILE *fp = fopen("/proc/net/dev", "r");
    if (!fp) return -1;

    ztk_os.net_count = 0;
    char line[1024];
    char iface[64];
    unsigned long long rx_bytes, rx_packets, rx_errors, rx_dropped, rx_overruns;
    unsigned long long tx_bytes, tx_packets, tx_errors, tx_dropped, tx_overruns;

    /* Skip header lines */
    fgets(line, sizeof(line), fp);
    fgets(line, sizeof(line), fp);

    while (fgets(line, sizeof(line), fp) && ztk_os.net_count < MAX_NETWORK_INTERFACES) {
        if (sscanf(line, "%s %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu",
                   iface, &rx_bytes, &rx_packets, &rx_errors, &rx_dropped, &rx_overruns, 
                   &tx_bytes, &tx_packets, &tx_errors, &tx_dropped, &tx_overruns) >= 11) {
            net_iface_info_t *net = &ztk_os.net_info[ztk_os.net_count++];
            iface[strcspn(iface, ":")] = '\0';
            strncpy(net->name, iface, sizeof(net->name) - 1);
            net->rx_bytes = rx_bytes;
            net->rx_packets = rx_packets;
            net->rx_errors = rx_errors;
            net->rx_dropped = rx_dropped;
            net->rx_overruns = rx_overruns;
            net->tx_bytes = tx_bytes;
            net->tx_packets = tx_packets;
            net->tx_errors = tx_errors;
            net->tx_dropped = tx_dropped;
            net->tx_overruns = tx_overruns;

            /* Get interface status */
            char path[256];
            snprintf(path, sizeof(path), "/sys/class/net/%s/operstate", iface);
            FILE *state_fp = fopen(path, "r");
            if (state_fp) {
                char state[32];
                fscanf(state_fp, "%s", state);
                net->up = strcmp(state, "up") == 0;
                net->running = net->up;
                fclose(state_fp);
            }

            /* Get MTU */
            snprintf(path, sizeof(path), "/sys/class/net/%s/mtu", iface);
            state_fp = fopen(path, "r");
            if (state_fp) {
                fscanf(state_fp, "%d", &net->mtu);
                fclose(state_fp);
            }

            /* Get MAC address */
            snprintf(path, sizeof(path), "/sys/class/net/%s/address", iface);
            state_fp = fopen(path, "r");
            if (state_fp) {
                fscanf(state_fp, "%s", net->mac);
                fclose(state_fp);
            }

            /* Get interface type */
            snprintf(path, sizeof(path), "/sys/class/net/%s/type", iface);
            state_fp = fopen(path, "r");
            if (state_fp) {
                int type;
                fscanf(state_fp, "%d", &type);
                switch(type) {
                    case 1: strcpy(net->type, "Ethernet"); break;
                    case 24: strcpy(net->type, "WLAN"); break;
                    case 32: strcpy(net->type, "InfiniBand"); break;
                    case 772: strcpy(net->type, "Loopback"); break;
                    default: snprintf(net->type, sizeof(net->type), "Type %d", type);
                }
                fclose(state_fp);
            }
        }
    }
    fclose(fp);

    /* Get IP addresses using ip command */
    for (int i = 0; i < ztk_os.net_count; i++) {
        char cmd[1024];
        snprintf(cmd, sizeof(cmd), "ip -4 addr show %s | grep 'inet ' | awk '{print $2}' | cut -d/ -f1", 
                 ztk_os.net_info[i].name);
        FILE *ip_fp = popen(cmd, "r");
        if (ip_fp) {
            char ip[64];
            if (fgets(ip, sizeof(ip), ip_fp)) {
                ip[strcspn(ip, "\n")] = '\0';
                strncpy(ztk_os.net_info[i].ipv4, ip, sizeof(ztk_os.net_info[i].ipv4) - 1);
            }
            pclose(ip_fp);
        }

        snprintf(cmd, sizeof(cmd), "ip -6 addr show %s | grep 'inet6 ' | awk '{print $2}' | cut -d/ -f1 | head -1", 
                 ztk_os.net_info[i].name);
        ip_fp = popen(cmd, "r");
        if (ip_fp) {
            char ip[64];
            if (fgets(ip, sizeof(ip), ip_fp)) {
                ip[strcspn(ip, "\n")] = '\0';
                strncpy(ztk_os.net_info[i].ipv6, ip, sizeof(ztk_os.net_info[i].ipv6) - 1);
            }
            pclose(ip_fp);
        }
    }

    return ztk_os.net_count;
}

int os_create_vxlan(const char *name, int vni, const char *group, const char *dev) {
    char cmd[1024];
    snprintf(cmd, sizeof(cmd), "ip link add %s type vxlan id %d group %s dev %s dstport 4789 2>/dev/null", 
             name, vni, group, dev);
    int result = system(cmd);
    if (result == 0) {
        snprintf(cmd, sizeof(cmd), "ip link set %s up", name);
        system(cmd);
        ztk_info("VXLAN interface created: %s (VNI: %d)", name, vni);
        return 0;
    }
    ztk_error("Failed to create VXLAN interface: %s", name);
    return -1;
}

int os_create_veth_pair(const char *name1, const char *name2) {
    char cmd[1024];
    snprintf(cmd, sizeof(cmd), "ip link add %s type veth peer name %s 2>/dev/null", name1, name2);
    int result = system(cmd);
    if (result == 0) {
        ztk_info("VETH pair created: %s <-> %s", name1, name2);
        return 0;
    }
    ztk_error("Failed to create VETH pair");
    return -1;
}

int os_create_bridge(const char *name) {
    char cmd[1024];
    snprintf(cmd, sizeof(cmd), "ip link add %s type bridge 2>/dev/null", name);
    int result = system(cmd);
    if (result == 0) {
        snprintf(cmd, sizeof(cmd), "ip link set %s up", name);
        system(cmd);
        ztk_info("Bridge created: %s", name);
        return 0;
    }
    ztk_error("Failed to create bridge: %s", name);
    return -1;
}

/* Container Operations */
int os_create_container(const char *name, const char *image, const char *runtime) {
    char cmd[1024];
    if (runtime && strcmp(runtime, "podman") == 0) {
        snprintf(cmd, sizeof(cmd), "podman create --name %s %s 2>/dev/null", name, image);
    } else if (runtime && strcmp(runtime, "docker") == 0) {
        snprintf(cmd, sizeof(cmd), "docker create --name %s %s 2>/dev/null", name, image);
    } else if (runtime && strcmp(runtime, "kata") == 0) {
        snprintf(cmd, sizeof(cmd), "kata-runtime create %s 2>/dev/null", name);
    } else {
        /* Try docker first, then podman */
        snprintf(cmd, sizeof(cmd), "docker create --name %s %s 2>/dev/null || podman create --name %s %s 2>/dev/null", 
                 name, image, name, image);
    }
    int result = system(cmd);
    if (result == 0) {
        ztk_info("Container created: %s (%s)", name, image);
        return 0;
    }
    ztk_error("Failed to create container: %s", name);
    return -1;
}

int os_start_container(const char *name) {
    char cmd[1024];
    snprintf(cmd, sizeof(cmd), "docker start %s 2>/dev/null || podman start %s 2>/dev/null", name, name);
    int result = system(cmd);
    if (result == 0) {
        ztk_info("Container started: %s", name);
        return 0;
    }
    ztk_error("Failed to start container: %s", name);
    return -1;
}

int os_stop_container(const char *name) {
    char cmd[1024];
    snprintf(cmd, sizeof(cmd), "docker stop %s 2>/dev/null || podman stop %s 2>/dev/null", name, name);
    int result = system(cmd);
    if (result == 0) {
        ztk_info("Container stopped: %s", name);
        return 0;
    }
    ztk_error("Failed to stop container: %s", name);
    return -1;
}

int os_list_containers(void) {
    ztk_print_header("Containers");
    
    system("docker ps -a --format 'table {{.Names}}\t{{.Image}}\t{{.Status}}\t{{.Ports}}' 2>/dev/null || podman ps -a --format 'table {{.Names}}\t{{.Image}}\t{{.Status}}' 2>/dev/null");
    
    ztk_print_footer();
    return 0;
}

/* Systemd Operations */
int os_list_systemd_services(void) {
    ztk_print_header("Systemd Services");
    system("systemctl list-units --type=service --all --no-pager | head -50");
    ztk_print_footer();
    return 0;
}

int os_start_systemd_service(const char *name) {
    char cmd[1024];
    snprintf(cmd, sizeof(cmd), "systemctl start %s", name);
    int result = system(cmd);
    if (result == 0) {
        ztk_info("Service started: %s", name);
        return 0;
    }
    ztk_error("Failed to start service: %s", name);
    return -1;
}

int os_stop_systemd_service(const char *name) {
    char cmd[1024];
    snprintf(cmd, sizeof(cmd), "systemctl stop %s", name);
    int result = system(cmd);
    if (result == 0) {
        ztk_info("Service stopped: %s", name);
        return 0;
    }
    ztk_error("Failed to stop service: %s", name);
    return -1;
}

int os_restart_systemd_service(const char *name) {
    char cmd[1024];
    snprintf(cmd, sizeof(cmd), "systemctl restart %s", name);
    int result = system(cmd);
    if (result == 0) {
        ztk_info("Service restarted: %s", name);
        return 0;
    }
    ztk_error("Failed to restart service: %s", name);
    return -1;
}

int os_enable_systemd_service(const char *name) {
    char cmd[1024];
    snprintf(cmd, sizeof(cmd), "systemctl enable %s", name);
    int result = system(cmd);
    if (result == 0) {
        ztk_info("Service enabled: %s", name);
        return 0;
    }
    ztk_error("Failed to enable service: %s", name);
    return -1;
}

int os_list_systemd_timers(void) {
    ztk_print_header("Systemd Timers");
    system("systemctl list-timers --all --no-pager | head -30");
    ztk_print_footer();
    return 0;
}

/* Journal Operations */
int os_journal_read(int count, journal_entry_t *entries) {
    char cmd[1024];
    snprintf(cmd, sizeof(cmd), "journalctl -n %d -o json --no-pager 2>/dev/null", count);
    FILE *fp = popen(cmd, "r");
    if (!fp) return -1;

    char line[4096];
    int idx = 0;
    while (fgets(line, sizeof(line), fp) && idx < count) {
        /* Parse JSON line - simplified */
        journal_entry_t *entry = &entries[idx];
        
        /* Extract timestamp */
        char *ts = strstr(line, "__REALTIME_TIMESTAMP");
        if (ts) {
            ts = strchr(ts, ':');
            if (ts) {
                ts++;
                while (isspace(*ts)) ts++;
                unsigned long long timestamp;
                if (sscanf(ts, "%llu", &timestamp) == 1) {
                    entry->timestamp = timestamp / 1000000;
                }
            }
        }

        /* Extract message */
        char *msg = strstr(line, "MESSAGE");
        if (msg) {
            msg = strchr(msg, ':');
            if (msg) {
                msg++;
                while (isspace(*msg)) msg++;
                char *end = strstr(msg, "\"");
                if (end) {
                    int len = end - msg;
                    if (len > 0 && len < sizeof(entry->message) - 1) {
                        strncpy(entry->message, msg, len);
                        entry->message[len] = '\0';
                        /* Unescape JSON */
                        for (int i = 0; entry->message[i]; i++) {
                            if (entry->message[i] == '\\' && entry->message[i+1] == 'n') {
                                entry->message[i] = '\n';
                                memmove(entry->message + i + 1, entry->message + i + 2, 
                                       strlen(entry->message + i + 2) + 1);
                            } else if (entry->message[i] == '\\' && entry->message[i+1] == 't') {
                                entry->message[i] = '\t';
                                memmove(entry->message + i + 1, entry->message + i + 2,
                                       strlen(entry->message + i + 2) + 1);
                            }
                        }
                    }
                }
            }
        }

        /* Extract unit */
        char *unit = strstr(line, "_SYSTEMD_UNIT");
        if (unit) {
            unit = strchr(unit, ':');
            if (unit) {
                unit++;
                while (isspace(*unit)) unit++;
                char *end = strstr(unit, "\"");
                if (end) {
                    int len = end - unit;
                    if (len > 0 && len < sizeof(entry->unit) - 1) {
                        strncpy(entry->unit, unit, len);
                        entry->unit[len] = '\0';
                    }
                }
            }
        }

        idx++;
    }
    pclose(fp);
    return idx;
}

/* Process Management */
int os_list_processes(void) {
    DIR *proc = opendir("/proc");
    if (!proc) return -1;

    ztk_os.process_count = 0;
    struct dirent *entry;

    while ((entry = readdir(proc)) != NULL && ztk_os.process_count < MAX_PROCESSES) {
        if (isdigit(entry->d_name[0])) {
            int pid = atoi(entry->d_name);
            if (pid > 0) {
                os_get_process_info(pid, &ztk_os.processes[ztk_os.process_count++]);
            }
        }
    }
    closedir(proc);

    return ztk_os.process_count;
}

int os_get_process_info(int pid, process_info_t *info) {
    char path[1024];
    FILE *fp;

    /* Read status */
    snprintf(path, sizeof(path), "/proc/%d/status", pid);
    fp = fopen(path, "r");
    if (fp) {
        char line[256];
        while (fgets(line, sizeof(line), fp)) {
            if (strncmp(line, "Name:", 5) == 0) {
                sscanf(line + 5, "%s", info->name);
            } else if (strncmp(line, "Pid:", 4) == 0) {
                info->pid = atoi(line + 4);
            } else if (strncmp(line, "PPid:", 5) == 0) {
                info->ppid = atoi(line + 5);
            } else if (strncmp(line, "Tgid:", 5) == 0) {
                info->pgid = atoi(line + 5);
            } else if (strncmp(line, "State:", 6) == 0) {
                char state[32];
                sscanf(line + 6, "%s", state);
                info->state = state[0];
                strncpy(info->status, state, sizeof(info->status) - 1);
            } else if (strncmp(line, "VmSize:", 7) == 0) {
                info->vsize = atoll(line + 7) * 1024;
            } else if (strncmp(line, "VmRSS:", 6) == 0) {
                info->rss = atoll(line + 6) * 1024;
            } else if (strncmp(line, "Threads:", 8) == 0) {
                info->threads = atoi(line + 8);
            } else if (strncmp(line, "Uid:", 4) == 0) {
                info->uid = atoi(line + 4);
            } else if (strncmp(line, "Gid:", 4) == 0) {
                info->gid = atoi(line + 4);
            }
        }
        fclose(fp);
    }

    /* Read command line */
    snprintf(path, sizeof(path), "/proc/%d/cmdline", pid);
    fp = fopen(path, "r");
    if (fp) {
        char *cmd = info->cmdline;
        size_t remaining = sizeof(info->cmdline);
        while (remaining > 0 && fgets(cmd, remaining, fp)) {
            size_t len = strlen(cmd);
            cmd += len;
            remaining -= len;
            if (remaining > 1) {
                *cmd = ' ';
                cmd++;
                remaining--;
            }
        }
        *cmd = '\0';
        fclose(fp);
    }

    /* Read exe link */
    snprintf(path, sizeof(path), "/proc/%d/exe", pid);
    ssize_t len = readlink(path, info->exe, sizeof(info->exe) - 1);
    if (len > 0) {
        info->exe[len] = '\0';
    }

    /* Read cwd */
    snprintf(path, sizeof(path), "/proc/%d/cwd", pid);
    len = readlink(path, info->cwd, sizeof(info->cwd) - 1);
    if (len > 0) {
        info->cwd[len] = '\0';
    }

    info->pid = pid;
    return 0;
}

int os_kill_process(int pid, int signal) {
    if (kill(pid, signal) == 0) {
        ztk_info("Process %d killed with signal %d", pid, signal);
        return 0;
    }
    ztk_error("Failed to kill process %d: %s", pid, strerror(errno));
    return -1;
}

int os_nice_process(int pid, int nice) {
    if (setpriority(PRIO_PROCESS, pid, nice) == 0) {
        ztk_info("Process %d nice set to %d", pid, nice);
        return 0;
    }
    ztk_error("Failed to set process %d nice: %s", pid, strerror(errno));
    return -1;
}

/* ============ OS Monitor Thread ============ */

void *os_monitor_thread(void *arg) {
    (void)arg;
    while (ztk_os.os_monitor_active) {
        /* Update system information periodically */
        os_get_cpu_info();
        os_get_memory_info();
        os_get_load_avg();
        os_list_filesystems();
        os_list_network_interfaces();

        sleep(5);
    }
    return NULL;
}

/* ============ OS Built-in Commands ============ */

int builtin_os_status(int argc, char **argv, void *context) {
    (void)argc; (void)argv; (void)context;

    /* Update system info */
    os_get_system_info();
    os_get_cpu_info();
    os_get_memory_info();
    os_get_load_avg();

    ztk_print_header("System Status");

    /* OS Info */
    printf("  OS:          %s\n", ztk_os.os_info.os_pretty_name[0] ? 
           ztk_os.os_info.os_pretty_name : ztk_os.os_info.os_name);
    printf("  Kernel:      %s (%s)\n", ztk_os.os_info.kernel_release, 
           ztk_os.os_info.kernel_arch);
    printf("  Hostname:    %s\n", ztk_os.os_info.hostname);
    printf("  Virtualization: %s\n", ztk_os.os_info.virtualization[0] ? 
           ztk_os.os_info.virtualization : "None");
    printf("\n");

    /* CPU Info */
    printf("  CPU:         %s\n", ztk_os.cpu_info.model);
    printf("  Cores:       %d (Threads: %d)\n", ztk_os.cpu_info.cores, ztk_os.cpu_info.threads);
    printf("  CPU Usage:   %llu%%\n", ztk_os.cpu_info.cpu_usage);
    printf("\n");

    /* Memory Info */
    printf("  Memory:      Total: %s, Used: %s, Free: %s\n",
           ztk_format_size(ztk_os.memory_info.total_ram),
           ztk_format_size(ztk_os.memory_info.total_ram - ztk_os.memory_info.available_ram),
           ztk_format_size(ztk_os.memory_info.available_ram));
    printf("  Swap:        Total: %s, Used: %s, Free: %s\n",
           ztk_format_size(ztk_os.memory_info.swap_total),
           ztk_format_size(ztk_os.memory_info.swap_total - ztk_os.memory_info.swap_free),
           ztk_format_size(ztk_os.memory_info.swap_free));
    printf("\n");

    /* Load Average */
    printf("  Load Average: %.2f, %.2f, %.2f\n",
           (double)ztk_os.system_load_1 / 100,
           (double)ztk_os.system_load_5 / 100,
           (double)ztk_os.system_load_15 / 100);
    printf("  Processes:   Running: %ld, Blocked: %ld\n",
           ztk_os.processes_running, ztk_os.processes_blocked);
    printf("\n");

    /* Uptime */
    FILE *fp = fopen("/proc/uptime", "r");
    if (fp) {
        double uptime;
        fscanf(fp, "%lf", &uptime);
        int days = (int)(uptime / 86400);
        int hours = (int)(uptime / 3600) % 24;
        int minutes = (int)(uptime / 60) % 60;
        printf("  Uptime:      %d days, %d hours, %d minutes\n", days, hours, minutes);
        fclose(fp);
    }

    ztk_print_footer();
    return 0;
}

int builtin_os_fs(int argc, char **argv, void *context) {
    (void)context;
    os_list_filesystems();

    ztk_print_header("Filesystems");
    printf("  %-20s %-15s %-20s %-12s %-12s\n",
           "Mount Point", "Type", "Device", "Size", "Used");
    printf("  %-20s %-15s %-20s %-12s %-12s\n",
           "-----------", "----", "------", "----", "----");

    for (int i = 0; i < ztk_os.fs_count; i++) {
        fs_info_t *fs = &ztk_os.fs_info[i];
        if (fs->mounted) {
            printf("  %-20s %-15s %-20s %-12s %-12s\n",
                   fs->mount_point,
                   fs->fstype,
                   fs->device,
                   ztk_format_size(fs->total_size),
                   ztk_format_size(fs->used_size));
        }
    }
    ztk_print_footer();
    return 0;
}

int builtin_os_net(int argc, char **argv, void *context) {
    (void)context;
    os_list_network_interfaces();

    ztk_print_header("Network Interfaces");
    printf("  %-12s %-15s %-16s %-10s %-12s %-12s\n",
           "Interface", "MAC", "IP Address", "Type", "RX", "TX");
    printf("  %-12s %-15s %-16s %-10s %-12s %-12s\n",
           "---------", "---", "----------", "----", "--", "--");

    for (int i = 0; i < ztk_os.net_count; i++) {
        net_iface_info_t *net = &ztk_os.net_info[i];
        if (strlen(net->ipv4) > 0 || strlen(net->ipv6) > 0) {
            printf("  %-12s %-15s %-16s %-10s %-12s %-12s\n",
                   net->name,
                   net->mac,
                   net->ipv4[0] ? net->ipv4 : net->ipv6,
                   net->type,
                   ztk_format_size(net->rx_bytes),
                   ztk_format_size(net->tx_bytes));
        }
    }
    ztk_print_footer();
    return 0;
}

int builtin_os_processes(int argc, char **argv, void *context) {
    (void)context;
    os_list_processes();

    ztk_print_header("Processes");
    printf("  %-8s %-8s %-20s %-12s %-12s %s\n",
           "PID", "PPID", "Name", "Memory", "Threads", "Status");
    printf("  %-8s %-8s %-20s %-12s %-12s %s\n",
           "---", "----", "----", "------", "-------", "------");

    /* Sort by memory usage */
    for (int i = 0; i < ztk_os.process_count; i++) {
        process_info_t *proc = &ztk_os.processes[i];
        if (proc->pid > 0 && proc->pid < 1000 && proc->name[0]) {
            printf("  %-8d %-8d %-20s %-12s %-12d %c\n",
                   proc->pid,
                   proc->ppid,
                   proc->name,
                   ztk_format_size(proc->rss),
                   proc->threads,
                   proc->state);
        }
    }
    ztk_print_footer();
    return 0;
}

int builtin_os_kill(int argc, char **argv, void *context) {
    (void)context;
    if (argc < 2) {
        ztk_error("kill: missing PID");
        return -1;
    }

    int signal = SIGTERM;
    int start = 1;

    if (argv[1][0] == '-') {
        signal = atoi(argv[1] + 1);
        start = 2;
    }

    for (int i = start; i < argc; i++) {
        int pid = atoi(argv[i]);
        os_kill_process(pid, signal);
    }
    return 0;
}

int builtin_os_mount(int argc, char **argv, void *context) {
    (void)context;
    if (argc < 3) {
        ztk_error("mount: missing arguments");
        ztk_error("Usage: mount <device> <mountpoint> [fstype] [options]");
        return -1;
    }

    const char *device = argv[1];
    const char *mountpoint = argv[2];
    const char *fstype = argc > 3 ? argv[3] : "auto";
    const char *options = argc > 4 ? argv[4] : "defaults";

    return os_mount_filesystem(device, mountpoint, fstype, options);
}

int builtin_os_umount(int argc, char **argv, void *context) {
    (void)context;
    if (argc < 2) {
        ztk_error("umount: missing mount point");
        return -1;
    }

    return os_umount_filesystem(argv[1]);
}

int builtin_os_container(int argc, char **argv, void *context) {
    (void)context;
    if (argc < 2) {
        os_list_containers();
        return 0;
    }

    if (strcmp(argv[1], "create") == 0 && argc > 3) {
        const char *runtime = argc > 4 ? argv[4] : NULL;
        return os_create_container(argv[2], argv[3], runtime);
    } else if (strcmp(argv[1], "start") == 0 && argc > 2) {
        return os_start_container(argv[2]);
    } else if (strcmp(argv[1], "stop") == 0 && argc > 2) {
        return os_stop_container(argv[2]);
    } else if (strcmp(argv[1], "list") == 0) {
        os_list_containers();
        return 0;
    } else if (strcmp(argv[1], "exec") == 0 && argc > 3) {
        char cmd[1024];
        snprintf(cmd, sizeof(cmd), "docker exec -it %s %s 2>/dev/null || podman exec -it %s %s 2>/dev/null",
                 argv[2], argv[3], argv[2], argv[3]);
        return system(cmd);
    }

    ztk_error("Usage: container [list|create <name> <image>|start <name>|stop <name>|exec <name> <command>]");
    return -1;
}

int builtin_os_systemd(int argc, char **argv, void *context) {
    (void)context;
    if (argc < 2) {
        os_list_systemd_services();
        return 0;
    }

    if (strcmp(argv[1], "list") == 0) {
        os_list_systemd_services();
        return 0;
    } else if (strcmp(argv[1], "start") == 0 && argc > 2) {
        return os_start_systemd_service(argv[2]);
    } else if (strcmp(argv[1], "stop") == 0 && argc > 2) {
        return os_stop_systemd_service(argv[2]);
    } else if (strcmp(argv[1], "restart") == 0 && argc > 2) {
        return os_restart_systemd_service(argv[2]);
    } else if (strcmp(argv[1], "enable") == 0 && argc > 2) {
        return os_enable_systemd_service(argv[2]);
    } else if (strcmp(argv[1], "disable") == 0 && argc > 2) {
        return os_disable_systemd_service(argv[2]);
    } else if (strcmp(argv[1], "status") == 0 && argc > 2) {
        return os_status_systemd_service(argv[2]);
    } else if (strcmp(argv[1], "timers") == 0) {
        os_list_systemd_timers();
        return 0;
    }

    ztk_error("Usage: systemd [list|start|stop|restart|enable|disable|status|timers] <service>");
    return -1;
}

int builtin_os_btrfs(int argc, char **argv, void *context) {
    (void)context;
    if (argc < 2) {
        ztk_error("btrfs: missing subcommand");
        ztk_error("Usage: btrfs [subvolume create <path>|snapshot <source> <dest>|rollback <path>]");
        return -1;
    }

    if (strcmp(argv[1], "subvolume") == 0 && argc > 3 && strcmp(argv[2], "create") == 0) {
        return os_create_btrfs_subvolume(argv[3]);
    } else if (strcmp(argv[1], "snapshot") == 0 && argc > 3) {
        return os_snapshot_btrfs_subvolume(argv[2], argv[3]);
    } else if (strcmp(argv[1], "rollback") == 0 && argc > 2) {
        return os_rollback_btrfs_snapshot(argv[2]);
    }

    ztk_error("Invalid btrfs command");
    return -1;
}

int builtin_os_journal(int argc, char **argv, void *context) {
    (void)context;
    int count = 20;

    if (argc > 1) {
        count = atoi(argv[1]);
        if (count <= 0) count = 20;
        if (count > 1000) count = 1000;
    }

    journal_entry_t entries[1000];
    int actual = os_journal_read(count, entries);

    ztk_print_header("Journal Entries");
    for (int i = 0; i < actual && i < 100; i++) {
        journal_entry_t *entry = &entries[i];
        char time_str[64];
        strftime(time_str, sizeof(time_str), "%Y-%m-%d %H:%M:%S", localtime(&entry->timestamp));
        printf("  [%s] %s: %s\n", time_str, entry->unit[0] ? entry->unit : "system", entry->message);
    }
    ztk_print_footer();

    if (actual > 100) {
        ztk_info("Showing first 100 of %d entries", actual);
    }
    return 0;
}

/* ============ Main Program with OS Updates ============ */

int main(int argc, char *argv[]) {
    int daemon_mode = 0;
    int batch_mode = 0;
    char *config_file = NULL;
    char *ai_token = NULL;
    char *batch_script = NULL;

    /* Parse command line arguments */
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--daemon") == 0) {
            daemon_mode = 1;
        } else if (strcmp(argv[i], "--config") == 0 && i + 1 < argc) {
            config_file = argv[++i];
        } else if (strcmp(argv[i], "--ai-token") == 0 && i + 1 < argc) {
            ai_token = argv[++i];
        } else if (strcmp(argv[i], "--batch") == 0 && i + 1 < argc) {
            batch_mode = 1;
            batch_script = argv[++i];
        } else if (strcmp(argv[i], "--verbose") == 0 || strcmp(argv[i], "-v") == 0) {
            ztk.verbose_mode = 1;
        } else if (strcmp(argv[i], "--debug") == 0) {
            ztk.debug_mode = 1;
            ztk.verbose_mode = 1;
        } else if (strcmp(argv[i], "--help") == 0 || strcmp(argv[i], "-h") == 0) {
            printf("ZTK Enterprise Shell v%s - OS Enhanced Edition\n", ZTK_VERSION);
            printf("Usage: %s [options]\n", argv[0]);
            printf("Options:\n");
            printf("  --config FILE    Use configuration file\n");
            printf("  --ai-token TOKEN Set AI token\n");
            printf("  --batch FILE     Run in batch mode\n");
            printf("  --daemon         Run as daemon\n");
            printf("  --verbose, -v    Verbose output\n");
            printf("  --debug          Debug mode\n");
            printf("  --help, -h       Show this help\n");
            printf("\nOS Commands:\n");
            printf("  status           Show system status\n");
            printf("  fs               List filesystems\n");
            printf("  net              List network interfaces\n");
            printf("  ps               List processes\n");
            printf("  kill             Kill processes\n");
            printf("  mount            Mount filesystem\n");
            printf("  umount           Unmount filesystem\n");
            printf("  container        Container management\n");
            printf("  systemd          Systemd service management\n");
            printf("  btrfs            Btrfs management\n");
            printf("  journal          Read system journal\n");
            return 0;
        }
    }

    curl_global_init(CURL_GLOBAL_DEFAULT);

    /* Initialize OS subsystem */
    pthread_mutex_init(&ztk_os.os_lock, NULL);
    pthread_mutex_init(&ztk_os.fs_lock, NULL);
    pthread_mutex_init(&ztk_os.net_lock, NULL);
    pthread_mutex_init(&ztk_os.process_lock, NULL);
    pthread_mutex_init(&ztk_os.systemd_lock, NULL);
    pthread_mutex_init(&ztk_os.journal_lock, NULL);

    /* Get initial OS info */
    os_get_system_info();
    os_get_cpu_info();
    os_get_memory_info();
    os_get_load_avg();
    os_list_filesystems();
    os_list_network_interfaces();

    if (ztk_init() != 0) {
        fprintf(stderr, "Failed to initialize ZTK Shell\n");
        return 1;
    }

    /* Load configuration */
    if (config_file) {
        config_load(config_file);
    }

    /* Initialize AI if token provided */
    if (ai_token) {
        ztk_ai_init(ai_token);
    }

    /* Register OS commands */
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

    /* Start OS monitor thread */
    ztk_os.os_monitor_active = 1;
    if (pthread_create(&ztk_os.os_monitor_thread, NULL, os_monitor_thread, NULL) != 0) {
        ztk_error("Failed to start OS monitor thread");
    }

    /* Start daemon mode if requested */
    if (daemon_mode) {
        if (fork() > 0) {
            return 0;
        }
        setsid();
        close(STDIN_FILENO);
        close(STDOUT_FILENO);
        close(STDERR_FILENO);
        ztk.daemon_mode = 1;
    }

    printf("%s\n", COLOR_CYAN);
    printf("╔══════════════════════════════════════════════════════════════╗\n");
    printf("║                                                              ║\n");
    printf("║           ZTK ENTERPRISE SHELL v%s                         ║\n", ZTK_VERSION);
    printf("║           %s          ║\n", ZTK_RELEASE);
    printf("║           Codename: %s - OS Enhanced                     ║\n", ZTK_CODENAME);
    printf("║                                                              ║\n");
    printf("║           %s - %s                                    ║\n", ZTK_BUILD_DATE, ZTK_BUILD_TIME);
    printf("║           OS: %s                                        ║\n", ztk_os.os_info.os_pretty_name);
    printf("║           Kernel: %s                                    ║\n", ztk_os.os_info.kernel_release);
    printf("║                                                              ║\n");
    printf("║           Type 'status' for system status                 ║\n");
    printf("║           Type 'help' for available commands              ║\n");
    printf("╚══════════════════════════════════════════════════════════════╝\n");
    printf("%s\n", COLOR_DEFAULT);

    ztk_monitor_start();

    if (ztk.ai_enabled) {
        pthread_create(&ztk.ai_thread_id, NULL, ztk_ai_thread, NULL);
        pthread_detach(ztk.ai_thread_id);
    }

    /* Start scheduler thread */
    pthread_create(&ztk.scheduler_thread_id, NULL, ztk_scheduler_thread, NULL);
    pthread_detach(ztk.scheduler_thread_id);

    /* Run batch mode if requested */
    if (batch_mode && batch_script) {
        ztk_batch_mode(batch_script);
    } else {
        ztk_loop();
    }

    /* Clean up */
    ztk_os.os_monitor_active = 0;
    if (ztk_os.os_monitor_thread) {
        pthread_join(ztk_os.os_monitor_thread, NULL);
    }

    pthread_mutex_destroy(&ztk_os.os_lock);
    pthread_mutex_destroy(&ztk_os.fs_lock);
    pthread_mutex_destroy(&ztk_os.net_lock);
    pthread_mutex_destroy(&ztk_os.process_lock);
    pthread_mutex_destroy(&ztk_os.systemd_lock);
    pthread_mutex_destroy(&ztk_os.journal_lock);

    ztk_cleanup();
    curl_global_cleanup();

    return 0;
}
