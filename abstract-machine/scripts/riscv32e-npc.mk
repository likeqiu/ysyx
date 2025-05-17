include $(AM_HOME)/scripts/isa/riscv.mk
include $(AM_HOME)/scripts/platform/npc.mk
# COMMON_CFLAGS: Common Compiler Flags
# 追加并覆盖通用的编译器标志，指定RISC-V 32位嵌入式架构
COMMON_CFLAGS += -march=rv32e_zicsr -mabi=ilp32e  # overwrite

# LDFLAGS: Linker Flags
# 追加并覆盖链接器标志，指定生成32位RISC-V ELF格式
# 覆盖链接器输出格式为32位小端RISC-V ELF
LDFLAGS       += -melf32lriscv                    # overwrite

# AM_SRCS: Abstract Machine Source files
# 追加NPC平台的libgcc相关源文件，提供基本运算支持
AM_SRCS += riscv/npc/libgcc/div.S \     # 除法运算的汇编实现
           riscv/npc/libgcc/muldi3.S \  # 64位乘法运算的汇编实现
           riscv/npc/libgcc/multi3.c \  # 多精度乘法运算的C实现
           riscv/npc/libgcc/ashldi3.c \ # 算术左移运算的C实现
           riscv/npc/libgcc/unused.c    # 未使用的占位符C文件（可能为兼容性保留）
