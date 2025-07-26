AM_SRCS := platform/nemu/trm.c \
           platform/nemu/ioe/ioe.c \
           platform/nemu/ioe/timer.c \
           platform/nemu/ioe/input.c \
           platform/nemu/ioe/gpu.c \
           platform/nemu/ioe/audio.c \
           platform/nemu/ioe/disk.c \
           platform/nemu/mpe.c
# - platform/nemu/trm.c: 终端（Terminal）相关代码，处理 NEMU 平台的基本输入输出功能。
# - platform/nemu/ioe/ioe.c: 输入输出扩展（Input/Output Extension）核心代码，管理 NEMU 平台的 IO 设备。
# - platform/nemu/ioe/timer.c: 定时器设备驱动代码，用于 NEMU 平台的时间管理和调度。
# - platform/nemu/ioe/input.c: 输入设备（如键盘）驱动代码，处理 NEMU 平台的输入事件。
# - platform/nemu/ioe/gpu.c: 图形处理单元（GPU）驱动代码，处理 NEMU 平台的图形输出。
# - platform/nemu/ioe/audio.c: 音频设备驱动代码，处理 NEMU 平台的音频输入输出。
# - platform/nemu/ioe/disk.c: 磁盘设备驱动代码，管理 NEMU 平台的存储设备。
# - platform/nemu/mpe.c: 多核处理（Multi-Processor Extension）代码，支持 NEMU 平台的多核 CPU 管理。

CFLAGS    += -fdata-sections -ffunction-sections
# - -fdata-sections: 将每个全局变量放入独立的段（section），便于链接时优化。
# - -ffunction-sections: 将每个函数放入独立的段，便于链接时去除未使用的代码。

CFLAGS    += -I$(AM_HOME)/am/src/platform/nemu/include
# CFLAGS（续）：添加头文件路径。
# - -I$(AM_HOME)/am/src/platform/nemu/include: 指定 NEMU 平台特定头文件目录，$(AM_HOME) 是 AbstractMachine 仓库的根目录。

LDSCRIPTS += $(AM_HOME)/scripts/linker.ld
# LDSCRIPTS: 表示链接脚本（Linker Scripts）的路径，指定链接时使用的脚本文件。
# 变量名含义：LD 表示 Linker（链接器），SCRIPTS 表示脚本。
# - $(AM_HOME)/scripts/linker.ld: 使用 AbstractMachine 提供的链接脚本，定义内存布局和段分配。

LDFLAGS   += --defsym=_pmem_start=0x80000000 --defsym=_entry_offset=0x0
# LDFLAGS: 表示链接器的标志（Linker Flags），用于指定链接时的选项。
# 变量名含义：LD 表示 Linker，FLAGS 表示标志。
# - --defsym=_pmem_start=0x80000000: 定义物理内存起始地址为 0x80000000。
# - --defsym=_entry_offset=0x0: 定义程序入口点偏移为 0。

LDFLAGS   += --gc-sections -e _start
# LDFLAGS（续）：添加额外的链接标志。
# - --gc-sections: 启用垃圾回收（Garbage Collection），移除未使用的段，与 -fdata-sections 和 -ffunction-sections 配合使用。
# - -e _start: 指定程序入口点为 _start 函数。

NEMUFLAGS += -b -l $(shell dirname $(IMAGE).elf)/nemu-log.txt -e $(IMAGE).elf
# NEMUFLAGS: 表示 NEMU 模拟器的运行参数（NEMU Flags），用于配置 NEMU 模拟器的行为。
# 变量名含义：NEMU 表示 NEMU 模拟器，FLAGS 表示参数。
# - -l $(shell dirname $(IMAGE).elf)/nemu-log.txt: 指定 NEMU 的日志文件路径，保存模拟器运行日志。
# - -e $(IMAGE).elf: 指定要运行的 ELF 文件，$(IMAGE).elf 是生成的内核镜像。

MAINARGS_MAX_LEN = 64
# MAINARGS_MAX_LEN: 定义主函数参数的最大长度（Main Arguments Maximum Length）。
# 变量名含义：MAINARGS 表示主函数参数，MAX_LEN 表示最大长度。
# 具体说明：限制传递给程序的主函数参数字符串长度为 64 字节。

MAINARGS_PLACEHOLDER = The insert-arg rule in Makefile will insert mainargs here.
# MAINARGS_PLACEHOLDER: 定义主函数参数的占位符字符串（Main Arguments Placeholder）。
# 变量名含义：MAINARGS 表示主函数参数，PLACEHOLDER 表示占位符。
# 具体说明：此字符串作为占位符，后续由 insert-arg 规则替换为实际参数。

CFLAGS += -DMAINARGS_MAX_LEN=$(MAINARGS_MAX_LEN) -DMAINARGS_PLACEHOLDER=\""$(MAINARGS_PLACEHOLDER)"\"
# CFLAGS（续）：为编译器定义宏，用于将 MAINARGS_MAX_LEN 和 MAINARGS_PLACEHOLDER 传递给代码。
# - -DMAINARGS_MAX_LEN=$(MAINARGS_MAX_LEN): 定义宏 MAINARGS_MAX_LEN，值为 64。
# - -DMAINARGS_PLACEHOLDER=\""$(MAINARGS_PLACEHOLDER)"\": 定义宏 MAINARGS_PLACEHOLDER，值为占位符字符串，包含双引号。

insert-arg: image
	@python3 $(AM_HOME)/tools/insert-arg.py $(IMAGE).bin $(MAINARGS_MAX_LEN) "$(MAINARGS_PLACEHOLDER)" "$(mainargs)"
# insert-arg: 插入参数目标，用于将主函数参数插入到二进制文件中。
# 规则说明：
# - 依赖于 image 目标，确保在插入参数前已生成二进制文件。
# - @python3 $(AM_HOME)/tools/insert-arg.py: 调用 Python 脚本 insert-arg.py 处理参数插入。
# - $(IMAGE).bin: 输入的二进制文件，包含程序代码。
# - $(MAINARGS_MAX_LEN): 参数最大长度（64）。   
# - "$(MAINARGS_PLACEHOLDER)": 要替换的占位符字符串。
# - "$(mainargs)": 实际的主函数参数，由用户提供。

image: image-dep
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin
# image: 生成镜像目标，负责生成二进制文件和反汇编文件。
# 规则说明：
# - 依赖于 image-dep 目标，确保 ELF 文件已生成。
# - $(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt: 使用 objdump 反汇编 ELF 文件，输出到 .txt 文件。
# - $(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary: 使用 objcopy 剥离调试信息，设置 BSS 段属性，生成二进制格式文件。
# - $(IMAGE).elf: 输入的 ELF 文件。
# - $(IMAGE).bin: 输出的二进制文件。

run: insert-arg
	$(MAKE) -C $(NEMU_HOME) ISA=$(ISA) run ARGS="$(NEMUFLAGS)" IMG=$(IMAGE).bin    
# run: 运行目标，用于在 NEMU 模拟器中运行生成的二进制文件。
# - 依赖于 insert-arg 目标，确保参数已插入二进制文件。
# - $(MAKE) -C $(NEMU_HOME): 在 NEMU 模拟器目录执行 make 命令，$(NEMU_HOME) 是 NEMU 仓库路径。
# - ISA=$(ISA): 指定指令集体系结构（如 riscv64）。
# - run: 执行 NEMU 的 run 目标。
# - ARGS="$(NEMUFLAGS)": 传递 NEMUFLAGS 参数，包括日志文件和 ELF 文件路径。
# - IMG=$(IMAGE).bin: 指定要运行的二进制文件。

gdb: insert-arg
	$(MAKE) -C $(NEMU_HOME) ISA=$(ISA) gdb ARGS="$(NEMUFLAGS)" IMG=$(IMAGE).bin
# gdb: 调试目标，用于在 NEMU 模拟器中通过 GDB 调试二进制文件。
# - 依赖于 insert-arg 目标，确保参数已插入二进制文件。
# - $(MAKE) -C $(NEMU_HOME): 在 NEMU 模拟器目录执行 make 命令。
# - ISA=$(ISA): 指定指令集体系结构。
# - gdb: 执行 NEMU 的 gdb 目标，启动 GDB 调试模式。
# - ARGS="$(NEMUFLAGS)": 传递 NEMUFLAGS 参数。
# - IMG=$(IMAGE).bin: 指定调试的二进制文件。

.PHONY: insert-arg
# .PHONY: 声明 insert-arg 为伪目标，避免与同名文件冲突。