AM_SRCS := platform/nemu/trm.c \
           platform/nemu/ioe/ioe.c \
           platform/nemu/ioe/timer.c \
           platform/nemu/ioe/input.c \
           platform/nemu/ioe/gpu.c \
           platform/nemu/ioe/audio.c \
           platform/nemu/ioe/disk.c \
           platform/nemu/mpe.c

#-ffunction-sections 每个函数放到独立的输入段里             
#-fdata-sections     每个全局变量/静态数据放到独立输入段
#默认情况下，一个 .o 里所有函数都挤在同一个 .text 段里，所有数据都挤在同一个 .data/.rodata 段里；加了这两个选项后，编译器会把“每个函数/每个数据对象”拆成单独的小段（section）。这样链接器才能“精确删除没用的那一个函数/变量”，而不是“一删就得把整段都删掉”
#--defsym           直接在链接器符号表里定义一个符号，值等于给定常量（这里是地址）
#--gc-sections       启用“段垃圾回收”
#-e _start           指定入口点符号为 _start
#-d：反汇编所有可执行段
#objcopy ... -O binary 把 ELF 变成裸 .bin
CFLAGS    += -fdata-sections -ffunction-sections
CFLAGS    += -I$(AM_HOME)/am/src/platform/nemu/include
LDSCRIPTS += $(AM_HOME)/scripts/linker.ld
LDFLAGS   += --defsym=_pmem_start=0x80000000 --defsym=_entry_offset=0x0
LDFLAGS   += --gc-sections -e _start
NEMUFLAGS +=  -l $(shell dirname $(IMAGE).elf)/nemu-log.txt -e $(IMAGE).elf
MAINARGS_MAX_LEN = 64
MAINARGS_PLACEHOLDER = The insert-arg rule in Makefile will insert mainargs here.
CFLAGS +=  -DMAINARGS_MAX_LEN=$(MAINARGS_MAX_LEN) -DMAINARGS_PLACEHOLDER=\""$(MAINARGS_PLACEHOLDER)"\"

insert-arg: image
	@python3 $(AM_HOME)/tools/insert-arg.py $(IMAGE).bin $(MAINARGS_MAX_LEN) "$(MAINARGS_PLACEHOLDER)" "$(mainargs)"

image: image-dep
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin

run: insert-arg
	$(MAKE) -C $(NEMU_HOME) ISA=$(ISA) run ARGS="$(NEMUFLAGS)" IMG=$(IMAGE).bin

gdb: insert-arg
	$(MAKE) -C $(NEMU_HOME) ISA=$(ISA) gdb ARGS="$(NEMUFLAGS)" IMG=$(IMAGE).bin

.PHONY: insert-arg
