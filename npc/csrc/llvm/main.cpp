// main.cpp
#include <stdio.h>

// 声明disasm.cpp中的函数
extern "C"
{
    void init_disasm_llvm();
    void free_disasm_llvm();
    void itrace_print(long long pc, unsigned int instruction_word, int instr_len_bytes);
}

int main()
{
    // 初始化反汇编器
    init_disasm_llvm();

    // 使用反汇编器
    // 例如：RISC-V指令 0x13（addi x0, x0, 0）
    itrace_print(0x1000, 0x00000013, 4);

    // 例如：另一个指令
    itrace_print(0x1004, 0x00100093, 4); // addi x1, x0, 1

    // 清理资源
    free_disasm_llvm();

    return 0;
}