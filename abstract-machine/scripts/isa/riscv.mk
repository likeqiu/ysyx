CROSS_COMPILE := riscv64-linux-gnu-
COMMON_CFLAGS :=  -fno-pic -march=rv64g -mcmodel=medany -mstrict-align
# 禁用位置无关代码（Position-Independent Code）
# 指定目标架构为RISC-V 64位，支持通用指令集扩展（rv64g包括I、M、A、F、D等）
# 使用medany代码模型，适用于任意地址的内存访问（适合嵌入式系统）
# 强制严格对齐，禁用非对齐内存访问优化
CFLAGS        += $(COMMON_CFLAGS) -static
ASFLAGS       += $(COMMON_CFLAGS) -O0
LDFLAGS       += -melf64lriscv
# 生成64位小端RISC-V ELF格式的可执行文件

# overwrite ARCH_H defined in $(AM_HOME)/Makefile
ARCH_H := arch/riscv.h
