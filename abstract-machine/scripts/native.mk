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


gdb: image
#	gdb  --args $(IMAGE).elf
	gdb  -ex "handle SIGUSR1 SIGUSR2 SIGSEGV noprint nostop" $(IMAGE).elf

