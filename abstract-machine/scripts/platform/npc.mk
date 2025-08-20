AM_SRCS := riscv/npc/start.S \
           riscv/npc/trm.c \
           riscv/npc/ioe.c \
           riscv/npc/timer.c \
           riscv/npc/input.c \
           riscv/npc/gpu.c \
           riscv/npc/serial.c \
           riscv/npc/audio.c \
           riscv/npc/cte.c \
           riscv/npc/trap.S \
           platform/dummy/vme.c \
           platform/dummy/mpe.c

CFLAGS    += -fdata-sections -ffunction-sections
# 将每个全局变量放入单独的数据段   将每个函数放入单独的代码段
CFLAGS    += -I$(AM_HOME)/am/src/platform/npc/include

LDSCRIPTS += $(AM_HOME)/scripts/linker.ld
# 指定链接脚本文件，用于定义内存布局
LDFLAGS   += --defsym=_pmem_start=0x80000000 --defsym=_entry_offset=0x0

# LDFLAGS: Linker Flags
# 定义链接器选项，设置内存起始地址  定义入口点偏移为0

LDFLAGS   += --gc-sections -e _start
#    移除未使用的代码和数据段（垃圾回收）  指定程序入口点为_start符号

NPCFLAGS += -b


# 定义main函数参数的最大长度
MAINARGS_MAX_LEN = 64
MAINARGS_PLACEHOLDER = The insert-arg rule in Makefile will insert mainargs here.
#Makefile 中的 insert-arg 规则会在此处插入 mainargs

# 向CFLAGS添加宏定义，传递参数最大长度和占位符到C代码
CFLAGS += -DMAINARGS_MAX_LEN=$(MAINARGS_MAX_LEN) -DMAINARGS_PLACEHOLDER=\""$(MAINARGS_PLACEHOLDER)"\"


# insert-arg: Makefile target
# 用于将mainargs参数插入到镜像文件中，依赖image目标

insert-arg: image
	@python3 $(AM_HOME)/tools/insert-arg.py $(IMAGE).bin $(MAINARGS_MAX_LEN) "$(MAINARGS_PLACEHOLDER)" "$(mainargs)"

# 调用Python脚本插入参数 , 输入的二进制镜像文件 参数最大长度 占位符字符串 要插入的实际参数


# image: Makefile target
# 生成最终的二进制镜像文件，依赖image-dep（未在代码中显示）
image: image-dep
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin

#使用objdump反汇编ELF文件，生成汇编代码到txt 打印提示信息，显示正在生成二进制文件 移除符号表和调试信息 输出格式为纯二进制  从ELF文件生成二进制镜像

run: insert-arg
	$(MAKE) -C $(NPC_HOME) ISA=$(ISA) run ARGS="$(NPCFLAGS)" IMG=$(IMAGE).bin
	
    #echo "TODO: add command here to run simulation"


.PHONY: insert-arg
