AM_SRCS := native/trm.c \
           native/ioe.c \
           native/cte.c \
           native/trap.S \
           native/vme.c \
           native/mpe.c \
           native/platform.c \
           native/ioe/input.c \
           native/ioe/timer.c \
           native/ioe/gpu.c \
           native/ioe/uart.c \
           native/ioe/audio.c \
           native/ioe/disk.c
# AM_SRCS: 表示 AbstractMachine 源文件列表，定义了需要编译的 C 和汇编文件。
# AM 表示 AbstractMachine，SRCS 是 Source 的缩写，指源文件。
# - native/trm.c: 终端（Terminal）相关代码，处理基本的输入输出功能。
# - native/ioe.c: 输入输出扩展（Input/Output Extension）核心代码，管理 IO 设备。
# - native/cte.c: 上下文切换（Context Switch）代码，处理线程或任务切换。
# - native/trap.S: 陷阱（Trap）处理汇编代码，处理中断和异常。
# - native/vme.c: 虚拟内存（Virtual Memory）管理代码，支持内存分页和保护。
# - native/mpe.c: 多核处理（Multi-Processor Extension）代码，支持多核 CPU 管理。
# - native/platform.c: 平台相关代码，包含特定硬件平台的初始化和配置。
# - native/ioe/input.c: 输入设备（如键盘、鼠标）驱动代码。
# - native/ioe/timer.c: 定时器设备驱动代码，用于时间管理和调度。
# - native/ioe/gpu.c: 图形处理单元（GPU）驱动代码，处理图形输出。
# - native/ioe/uart.c: 串口（UART）驱动代码，用于串行通信。
# - native/ioe/audio.c: 音频设备驱动代码，处理音频输入输出。
# - native/ioe/disk.c: 磁盘设备驱动代码，管理存储设备。

CFLAGS  += -fpie $(shell sdl2-config --cflags)
# CFLAGS: 表示 C 编译器的标志（C Compiler Flags），用于指定 C 文件编译时的选项。
# - -fpie: 生成位置无关代码（Position Independent Code），适用于动态链接或可重定位的二进制文件。
# - $(shell sdl2-config --cflags): 通过 sdl2-config 工具获取 SDL2 库的编译标志，通常包括头文件路径和其他编译选项。

ASFLAGS += -fpie -pie
# ASFLAGS: 表示汇编编译器的标志（Assembler Flags），用于指定汇编文件编译时的选项。
# 变量名含义：AS 表示 Assembler（汇编器），FLAGS 表示编译标志。
# - -fpie: 生成位置无关代码，与 CFLAGS 中的 -fpie 保持一致。
# - -pie: 生成位置无关可执行文件（Position Independent Executable），支持动态加载和运行时重定位。

comma = ,
# comma: 定义一个逗号（,）变量，用于在 LDFLAGS_CXX 中构造链接选项。
# 变量名含义：comma 直接表示“逗号”，用作字符串分隔符。

LDFLAGS_CXX = $(addprefix -Wl$(comma), $(LDFLAGS)) -pie -ldl $(shell sdl2-config --libs)
# LDFLAGS_CXX: 表示 C++ 链接器的标志（Linker Flags for C++），用于指定链接 C++ 程序时的选项。
# 变量名含义：LD 表示 Linker（链接器），FLAGS 表示标志，CXX 表示 C++。
# 具体标志说明：
# - $(addprefix -Wl$(comma), $(LDFLAGS)): 将 LDFLAGS 中的标志转换为链接器选项，-Wl, 表示将后续参数传递给链接器。
# - -pie: 生成位置无关可执行文件，与 ASFLAGS 中的 -pie 一致。
# - -ldl: 链接动态链接库（Dynamic Linker），支持运行时加载动态库。
# - $(shell sdl2-config --libs): 通过 sdl2-config 工具获取 SDL2 库的链接选项，通常包括库文件路径和依赖库。

run: image
	$(IMAGE).elf
# run: 运行目标，用于执行编译生成的 ELF 可执行文件。
# - 依赖于 image 目标，确保在运行前已生成可执行文件。
# - $(IMAGE).elf: 执行生成的 ELF 文件，$(IMAGE) 是内核镜像的绝对路径，.elf 是可执行文件后缀。

gdb: image
#	gdb  --args $(IMAGE).elf
	gdb  -ex "handle SIGUSR1 SIGUSR2 SIGSEGV noprint nostop" $(IMAGE).elf
# gdb: 调试目标，用于通过 GDB 调试生成的 ELF 可执行文件。
# - 依赖于 image 目标，确保在调试前已生成可执行文件。
# - gdb -ex "handle SIGUSR1 SIGUSR2 SIGSEGV noprint nostop": 启动 GDB 并设置信号处理，忽略 SIGUSR1、SIGUSR2 和 SIGSEGV 信号（不打印、不停止）。
# - $(IMAGE).elf: 指定调试的目标 ELF 文件。
