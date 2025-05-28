#include <stdio.h>
#include <stdint.h>
#include <assert.h>
#include <dlfcn.h>
#include <llvm-c/Disassembler.h>
#include <llvm-c/Target.h>  // 添加以支持 LLVMTargetRef 和 LLVMGetTargetFromTriple
#include <llvm-c/Support.h> // 添加以支持 LLVMDisposeMessage
#include "svdpi.h"

// 全局反汇编上下文
static LLVMDisasmContextRef disasm_context;

// 初始化 LLVM 反汇编引擎
void init_disasm()
{
    // 初始化 LLVM 目标
    LLVMInitializeAllTargetInfos();
    LLVMInitializeAllTargetMCs();
    LLVMInitializeAllDisassemblers();

    // 设置目标架构为 RISC-V（RV32E）
    const char *triple = "riscv32-unknown-elf";
    LLVMTargetRef target;
    char *error;
    if (LLVMGetTargetFromTriple(triple, &target, &error))
    {
        fprintf(stderr, "Failed to get target: %s\n", error);
        LLVMDisposeMessage(error);
        assert(0);
    }

    // 创建反汇编上下文
    disasm_context = LLVMCreateDisasm(triple, NULL, 0, NULL, NULL);
    assert(disasm_context);

    // 设置反汇编选项（如 RV32E 模式）
    LLVMSetDisasmOptions(disasm_context, LLVMDisassembler_Option_UseMarkup);
}

// DPI-C 函数：从 Verilog 获取指令和 PC
void dpi_trace_instruction(uint32_t pc, uint32_t inst)
{
    char disasm_str[128];
    uint8_t inst_bytes[4] = {
        (uint8_t)((inst >> 0) & 0xFF), // 显式转换为 uint8_t 消除警告
        (uint8_t)((inst >> 8) & 0xFF),
        (uint8_t)((inst >> 16) & 0xFF),
        (uint8_t)((inst >> 24) & 0xFF)};

    // 使用 LLVM 反汇编指令
    size_t bytes_used = LLVMDisasmInstruction(
        disasm_context, inst_bytes, 4, pc, disasm_str, sizeof(disasm_str));
    if (bytes_used == 0)
    {
        snprintf(disasm_str, sizeof(disasm_str), "invalid instruction");
    }

    // itrace 输出
    printf("[itrace] 0x%08x: %s\n", pc, disasm_str);

    // ftrace：检查是否为 jal 或 jalr
    if ((FCA0inst & 0x7F) == 0x6F)
    { // jal 指令 (opcode: 1101111)
        printf("[ftrace] CALL 0x%08x at 0x%08x\n", pc + ((inst >> 12) << 12), pc);
    }
    else if ((inst & 0x7F) == 0x67 && (inst & 0x7000) == 0x0)
    { // jalr 指令 (opcode: 1100111, funct3: 000)
        printf("[ftrace] CALL (jalr) at 0x%08x\n", pc);
    }
}

// 清理反汇编上下文
void cleanup_disasm()
{
    if (disasm_context)
    {
        LLVMDisasmDispose(disasm_context);
    }
}