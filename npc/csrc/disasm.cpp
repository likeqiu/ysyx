#include <iostream>
#include <string>
#include <memory>  // For std::unique_ptr
#include <vector>  // For std::vector<uint8_t>
#include <cstdint> // For uint8_t


// LLVM 核心头文件
#include "llvm/Support/raw_ostream.h"
#include "llvm/Support/Error.h"     // For llvm::Error
#include "llvm/MC/TargetRegistry.h" // TargetRegistry 已经移到 MC
#include "llvm/Support/InitLLVM.h"  // 初始化 LLVM 环境
#include "llvm/ADT/ArrayRef.h"      // For llvm::ArrayRef

// LLVM 反汇编器相关头文件
#include "llvm/MC/MCAsmInfo.h"
#include "llvm/MC/MCContext.h"
#include "llvm/MC/MCDisassembler/MCDisassembler.h" // 修正路径
#include "llvm/MC/MCInst.h"                        // Represents a single machine instruction
#include "llvm/MC/MCInstPrinter.h"
#include "llvm/MC/MCRegisterInfo.h"
#include "llvm/MC/MCSubtargetInfo.h"
#include "llvm/MC/MCTargetOptions.h" // createMCAsmInfo 需要此头文件

// 特定架构的反汇编器头文件
#include "llvm/Target/TargetMachine.h" // 可能需要
#include "llvm/Support/TargetSelect.h" // 初始化所有目标

// SystemVerilog DPI 头文件 (如果你有的话，可以放在这里)
// #include <svdpi.h> // 示例

// --- 全局变量 ---
static std::unique_ptr<llvm::Target> TheTarget;
static std::unique_ptr<llvm::MCAsmInfo> TheAsmInfo;
static std::unique_ptr<llvm::MCRegisterInfo> TheRegisterInfo;
static std::unique_ptr<llvm::MCSubtargetInfo> TheSubtargetInfo;
static std::unique_ptr<llvm::MCContext> TheContext;
static std::unique_ptr<llvm::MCDisassembler> TheDisassembler;
static std::unique_ptr<llvm::MCInstPrinter> TheInstPrinter;

// --- 函数声明 (外部可见的 DPI 函数) ---
extern "C" void init_disasm_llvm();
extern "C" void free_disasm_llvm();
extern "C" void itrace_print(long long pc, unsigned int instruction_word, int instr_len_bytes);

// --- 宏定义判断 ---
// 请确保 Makefile 中正确定义了 CONFIG_ITRACE
// 例如：CXXFLAGS += -DCONFIG_ITRACE
#ifdef CONFIG_ITRACE

// --- 函数实现 ---

// 初始化 LLVM 反汇编器
extern "C" void init_disasm_llvm()
{
    // 注册所有目标和反汇编器
    llvm::InitializeAllTargetInfos();
    llvm::InitializeAllTargetMCs();
    llvm::InitializeAllDisassemblers();

    std::string Triple = "riscv32"; // 你的 RISC-V 架构 (riscv32 或 riscv64)
    std::string Error;

    // 1. 获取目标
    TheTarget.reset(llvm::TargetRegistry::lookupTarget(Triple, Error));
    if (!TheTarget)
    {
        llvm::errs() << "Error looking up target: " << Error << "\n";
        return;
    }

    // 2. 获取注册信息
    TheRegisterInfo.reset(TheTarget->createMCRegisterInfo(Triple));
    if (!TheRegisterInfo)
    {
        llvm::errs() << "Error creating MCRegisterInfo\n";
        return;
    }

    // 3. 获取 AsmInfo
    // createMCAsmInfo 需要一个 MCTargetOptions 对象
    llvm::MCTargetOptions MCOptions;
    TheAsmInfo.reset(TheTarget->createMCAsmInfo(*TheRegisterInfo, Triple, MCOptions));
    if (!TheAsmInfo)
    {
        llvm::errs() << "Error creating MCAsmInfo\n";
        return;
    }

    // 4. 获取子目标信息
    std::string Features = ""; // 例如 "+m,+a,+c"
    TheSubtargetInfo.reset(TheTarget->createMCSubtargetInfo(Triple, "", Features));
    if (!TheSubtargetInfo)
    {
        llvm::errs() << "Error creating MCSubtargetInfo\n";
        return;
    }

    // 5. 创建 MCContext
    // MCContext 构造函数参数已经改变
    TheContext.reset(new llvm::MCContext(
        llvm::Triple(Triple),
        TheAsmInfo.get(),
        TheRegisterInfo.get(),
        TheSubtargetInfo.get(),
        nullptr, // SourceMgr (可空)
        nullptr, // MCTargetOptions (可空)
        false,   // Compress
        ""       // DataLayoutString
        ));
    if (!TheContext)
    {
        llvm::errs() << "Error creating MCContext\n";
        return;
    }

    // 6. 创建反汇编器
    TheDisassembler.reset(TheTarget->createMCDisassembler(*TheSubtargetInfo, *TheContext));
    if (!TheDisassembler)
    {
        llvm::errs() << "Error creating MCDisassembler\n";
        return;
    }

    // 7. 创建指令打印器
    // AsmDialect 现在通过 getAssemblerDialect() 访问
    TheInstPrinter.reset(TheTarget->createMCInstPrinter(
        llvm::Triple(Triple),
        TheAsmInfo->getAssemblerDialect(), // 修正访问方式
        *TheAsmInfo,
        *TheRegisterInfo));
    if (!TheInstPrinter)
    {
        llvm::errs() << "Error creating MCInstPrinter\n";
        return;
    }

    // 设置 InstPrinter 的输出流 (可选，如果需要打印到特定流)
    // TheInstPrinter->set ;OutputStream(llvm::nulls());
}

// 释放 LLVM 反汇编器资源
extern "C" void free_disasm_llvm()
{
    TheInstPrinter.reset();
    TheDisassembler.reset();
    TheContext.reset();
    TheSubtargetInfo.reset();
    TheAsmInfo.reset();
    TheRegisterInfo.reset();
    TheTarget.reset();
}

// 打印指令的反汇编结果
extern "C" void itrace_print(long long pc, unsigned int instruction_word, int instr_len_bytes)
{
    if (!TheDisassembler || !TheInstPrinter)
    {
        llvm::errs() << "Disassembler or InstPrinter not initialized!\n";
        return;
    }

    // 将 instruction_word 转换为字节数组 (针对32位指令)
    // 假设 instruction_word 是小端字节序，或者平台字节序匹配
    uint8_t bytes[instr_len_bytes];
    for (int i = 0; i < instr_len_bytes; ++i)
    {
        bytes[i] = (instruction_word >> (i * 8)) & 0xFF;
    }

    llvm::ArrayRef<uint8_t> instruction_bytes(bytes, instr_len_bytes);
    llvm::MCInst MI;
    uint64_t Size = 0; // 反汇编后的指令大小

    // MCDisassembler::getInstruction 返回 DecodeStatus
    llvm::MCDisassembler::DecodeStatus status =
        TheDisassembler->getInstruction(MI, Size, instruction_bytes, pc, llvm::nulls()); // 修正函数名和参数

    if (status == llvm::MCDisassembler::Success)
    {
        std::string buffer;
        llvm::raw_string_ostream OS(buffer);
        TheInstPrinter->printInst(&MI, Size, "", *TheSubtargetInfo, OS);
        OS.flush();
        // 打印反汇编结果
        printf("0x%08llx: 0x%08x \t%s\n", pc, instruction_word, buffer.c_str());
    }
    else if (status == llvm::MCDisassembler::SoftFail)
    {
        printf("0x%08llx: 0x%08x \t(Soft Fail)\n", pc, instruction_word);
    }
    else
    { // Invalid or Fail
        printf("0x%08llx: 0x%08x \t(Invalid Instruction)\n", pc, instruction_word);
    }
}

#else // CONFIG_ITRACE is not defined

// 如果 CONFIG_ITRACE 未定义，提供空实现
extern "C" void init_disasm_llvm()
{
    // 空实现
}

extern "C" void free_disasm_llvm()
{
    // 空实现
}

extern "C" void itrace_print(long long pc, unsigned int instruction_word, int instr_len_bytes)
{
    // 空实现
}

#endif // CONFIG_ITRACE