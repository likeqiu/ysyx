include $(AM_HOME)/scripts/isa/riscv.mk
include $(AM_HOME)/scripts/platform/npc.mk
# COMMON_CFLAGS: Common Compiler Flags
# 追加并覆盖通用的编译器标志，指定RISC-V 32位嵌入式架构
COMMON_CFLAGS += -march=rv32e_zicsr -mabi=ilp32e  # overwrite

# LDFLAGS: Linker Flags
# 追加并覆盖链接器标志，指定生成32位RISC-V ELF格式
# 覆盖链接器输出格式为32位小端RISC-V ELF
LDFLAGS       += -melf32lriscv                    # overwrite

AM_SRCS += riscv/npc/libgcc/div.S \
           riscv/npc/libgcc/muldi3.S \
           riscv/npc/libgcc/multi3.c \
           riscv/npc/libgcc/ashldi3.c \
           riscv/npc/libgcc/unused.c
