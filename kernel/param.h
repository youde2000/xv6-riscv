#define NPROC        64  // maximum number of processes  系统中最多可以同时运行64个进程
#define NCPU          8  // maximum number of CPUs  系统支持的最大 CPU 核心数量，用于配置与多核相关的数据结构，确保操作系统能够正确管理和调度多个 CPU 核心。
#define NOFILE       16  // open files per process  每个进程最多可以打开的文件数量，限制了进程的文件描述符表的大小
#define NFILE       100  // open files per system  系统中可以同时打开的最大文件数量，限制了全局文件表的大小
#define NINODE       50  // maximum number of active i-nodes  系统中可以同时活动的 inode 数量，
#define NDEV         10  // maximum major device number  系统中支持的最大设备号，设备号用于标识设备（如磁盘、控制台等）。xv6 最多支持 10 种设备。
#define ROOTDEV       1  // device number of file system root disk  根文件系统的设备号，文件系统位于设备号为 1 的磁盘上
#define MAXARG       32  // max exec arguments  exec 系统调用中参数的最大数量，当通过 exec 执行一个新程序时，最多可以传递 32 个参数。
#define MAXOPBLOCKS  10  // max # of blocks any FS op writes  文件系统操作中最大写入的块数，文件系统操作（如写文件）最多可以写入 10 个磁盘块。
#define LOGSIZE      (MAXOPBLOCKS*3)  // max data blocks in on-disk log  日志区域的最大块数。日志用于实现文件系统的崩溃恢复。LOGSIZE 是日志区域的大小，通常是 MAXOPBLOCKS 的 3 倍。
#define NBUF         (MAXOPBLOCKS*3)  // size of disk block cache  磁盘块缓存的大小。xv6 使用缓存来加速磁盘访问。NBUF 是缓存中可以存储的磁盘块数量。
#define FSSIZE       2000  // size of file system in blocks  文件系统的总大小（以磁盘块为单位）。xv6 的文件系统最多包含 2000 个磁盘块。
#define MAXPATH      128   // maximum file path name  文件路径名的最大长度。文件路径名（包括目录和文件名）最多可以包含 128 个字符。
#define USERSTACK    1     // user stack pages  用户进程栈的大小（以页为单位）。每个用户进程的栈大小为 1 页（通常是 4096 字节）。

