#include <iostream>
#include <string>
#include <memory> // For std::unique_ptr
#include <vector> // For std::vector<uint8_t>

// LLVM 核心头文件
#include "llvm/Support/raw_ostream.h"
#include "llvm/Support/Error.h" // For llvm::Error
#include "llvm/MC/TargetRegistry.h"
#include "llvm/Support/InitLLVM.h"

// LLVM 反汇编器相关头文件
#include "llvm/MC/MCAsmInfo.h"
#include "llvm/MC/MCContext.h"
#include "llvm/MC/MCDisassembler.h"
#include "llvm/MC/MCInst.h" // Represents a single machine instruction
#include "llvm/MC/MCInstPrinter.h"
#include "llvm/MC/MCRegisterInfo.h"
#include "llvm/MC/MCSubtargetInfo.h"

// 特定架构的反汇编器头文件
// 注意：这通常不是公共API，可能需要包含私有头文件或通过注册机制访问
// 对于 RISC-V，你可能需要确保 LLVM 的 RISC-V 后端已编译
#include "llvm/Target/TargetMachine.h" // 可能需要
#include "llvm/Support/TargetSelect.h" // 初始化所有目标

// SystemVerilog DPI 头文件
// 具体路径取决于你的项目和Verilator的输出
// 例如：#include "Vysyx_2306_top__DPI.h"
extern "C"
{
    // 声明从 SystemVerilog 调用的 C 函数
    // 注意：这里的参数类型要与 SystemVerilog 中 `import "DPI-C"` 的声明匹配
    // 对于32位指令，通常传递 `unsigned int` 或 `const unsigned char*`
    void itrace_print(long long pc, unsigned int instruction_word, int instr_len_bytes);
}

// 全局 LLVM 对象，只需初始化一次
static llvm::MCDisassembler *TheDisassembler = nullptr;
static llvm::MCInstPrinter *TheInstPrinter = nullptr;
static llvm::MCContext *TheContext = nullptr;
static llvm::MCAsmInfo *TheAsmInfo = nullptr;
static llvm::MCRegisterInfo *TheRegisterInfo = nullptr;
static llvm::MCSubtargetInfo *TheSubtargetInfo = nullptr;

static bool llvm_disassembler_initialized = false;

// === 初始化 LLVM 反汇编器 ===
// 这个函数应该在仿真开始时被调用一次
extern "C" void init_disasm_llvm()
{
    if (llvm_disassembler_initialized)
    {
        return;
    }

    // 1. 初始化 LLVM 目标注册表 (重要！)
    // 这将加载所有可用的目标架构和反汇编器
    llvm::InitializeAllTargetInfos();
    llvm::InitializeAllTargetMCs();
    llvm::InitializeAllAsmPrinters();
    llvm::InitializeAllAsmParsers();
    llvm::InitializeAllDisassemblers(); // 确保反汇编器被注册

    // 2. 选择目标架构 (RISC-V)
    std::string Triple = "riscv64-unknown-elf"; // 或 "riscv32-unknown-elf"
    std::string Error;
    const llvm::Target *TheTarget = llvm::TargetRegistry::lookupTarget(Triple, Error);
    if (!TheTarget)
    {
        std::cerr << "Error: Could not find target " << Triple << ": " << Error << std::endl;
        return;
    }

    // 3. 创建 MCRegisterInfo, MCAsmInfo, MCSubtargetInfo
    // 这些是特定于架构的，提供了寄存器信息、汇编语法信息等
    TheRegisterInfo = TheTarget->createMCRegInfo(Triple);
    if (!TheRegisterInfo)
    {
        std::cerr << "Error: Could not create MCRegisterInfo for " << Triple << std::endl;
        return;
    }

    TheAsmInfo = TheTarget->createMCAsmInfo(*TheRegisterInfo, Triple);
    if (!TheAsmInfo)
    {
        std::cerr << "Error: Could not create MCAsmInfo for " << Triple << std::endl;
        delete TheRegisterInfo;
        return;
    }

    // SubtargetInfo 通常用于处理CPU特性 (如扩展指令集)
    std::string CPU = "generic-rv64"; // 或 "generic-rv32", "rocket" 等
    std::string Features = "";        // 例如 "+m,+a,+f,+d,+c"
    TheSubtargetInfo = TheTarget->createMCSubtargetInfo(Triple, CPU, Features);
    if (!TheSubtargetInfo)
    {
        std::cerr << "Error: Could not create MCSubtargetInfo for " << Triple << std::endl;
        delete TheAsmInfo;
        delete TheRegisterInfo;
        return;
    }

    // 4. 创建 MCContext
    // MCContext 管理与汇编器和反汇编器相关的所有共享状态
    TheContext = new llvm::MCContext(TheAsmInfo, TheRegisterInfo, TheSubtargetInfo);
    if (!TheContext)
    {
        std::cerr << "Error: Could not create MCContext.\n";
        delete TheSubtargetInfo;
        delete TheAsmInfo;
        delete TheRegisterInfo;
        return;
    }

    // 5. 创建 MCDisassembler
    // 这是实际进行反汇编的对象
    TheDisassembler = TheTarget->createMCDisassembler(*TheSubtargetInfo, *TheContext);
    if (!TheDisassembler)
    {
        std::cerr << "Error: Could not create MCDisassembler for " << Triple << std::endl;
        delete TheContext;
        delete TheSubtargetInfo;
        delete TheAsmInfo;
        delete TheRegisterInfo;
        return;
    }

    // 6. 创建 MCInstPrinter
    // 用于将内部的 MCInst 对象转换为可读的汇编字符串
    // 通常需要指定汇编语法 (RISC-V 默认即可) 和打印选项
    TheInstPrinter = TheTarget->createMCInstPrinter(llvm::Triple(Triple), TheAsmInfo->AsmDialect, *TheAsmInfo, *TheRegisterInfo);
    if (!TheInstPrinter)
    {
        std::cerr << "Error: Could not create MCInstPrinter for " << Triple << std::endl;
        delete TheDisassembler;
        delete TheContext;
        delete TheSubtargetInfo;
        delete TheAsmInfo;
        delete TheRegisterInfo;
        return;
    }

    // 设置 InstPrinter 选项 (例如，是否打印注解)
    // TheInstPrinter->set','PrintBranchImmAsAddress(true); // 示例
    // TheInstPrinter->setPrintImmWithPlus(false); // 示例

    llvm_disassembler_initialized = true;
    std::cout << "LLVM RISC-V Disassembler initialized successfully." << std::endl;
}

// === 清理 LLVM 资源 ===
// 这个函数应该在仿真结束时被调用
extern "C" void free_disasm_llvm()
{
    if (llvm_disassembler_initialized)
    {
        delete TheInstPrinter;
        delete TheDisassembler;
        delete TheContext;
        delete TheSubtargetInfo;
        delete TheAsmInfo;
        delete TheRegisterInfo;
        llvm_disassembler_initialized = false;
        std::cout << "LLVM disassembler resources freed.\n";
    }
}

// === DPI-C 导出的 `itrace` 打印函数 ===
// 这个函数由 SystemVerilog 调用，执行反汇编并打印
// long long pc: 当前指令的PC值
// unsigned int instruction_word: 32位指令的二进制表示
// int instr_len_bytes: 指令的字节长度 (通常是 4 字节)
extern "C" void itrace_print(long long pc, unsigned int instruction_word, int instr_len_bytes)
{
    if (!llvm_disassembler_initialized)
    {
        // 尝试自动初始化，或者期待在仿真开始时明确调用 init_disasm_llvm
        init_disasm_llvm();
        if (!llvm_disassembler_initialized)
        {
            std::cerr << "Warning: LLVM disassembler not initialized, cannot perform itrace.\n";
            return;
        }
    }

    // LLVM 的反汇编器期望的是 `ArrayRef<uint8_t>` 或 `const uint8_t*`
    // 需要处理字节序：如果你的 SystemVerilog 是大端，但 LLVM 反汇编器是小端，需要转换
    // 这里假设 SystemVerilog 传递的 `instruction_word` 已经是适合目标架构的字节序
    // 或者你的 SystemVerilog 会处理好字节序，让 instruction_word 的低字节对应指令的低字节
    const uint8_t *code_bytes = reinterpret_cast<const uint8_t *>(&instruction_word);
    uint64_t current_address = pc;
    llvm::ArrayRef<uint8_t> bytes(code_bytes, instr_len_bytes);

    llvm::MCInst MI;
    uint64_t Size;

    // 尝试反汇编指令
    // 第一个参数是指令字节，第二个是指令长度，第三个是MCInst对象，第四个是实际反汇编的字节数
    llvm::MCDisassembler::DecodeStatus status =
        TheDisassembler->get ';Inst(MI, bytes, current_address, Size, llvm::nulls());

        if (status == llvm::MCDisassembler::Success)
    {
        // 反汇编成功，现在将 MCInst 打印到字符串
        std::string s;
        llvm::raw_string_ostream OS(s);
        TheInstPrinter->printInst(&MI, current_address, "", *TheSubtargetInfo, OS);

        // 打印结果
        printf("0x%016llx: 0x%08x\t%s\n", pc, instruction_word, OS.str().c_str());

        // TODO: 在这里添加 ftrace 逻辑
        // 根据 MI 的 opcode 和操作数来判断是否是函数调用/返回
        // 示例：检查是否是 JAL 或 JALR 指令
        // if (MI.getOpcode() == RISCV::JAL) { ... }
        // if (MI.getOpcode() == RISCV::JALR) { ... }
    }
    else if (status == llvm::MCDisassembler::Fail)
    {
        fprintf(stderr, "Error: Failed to disassemble instruction at 0x%016llx. Raw: 0x%08x\n", pc, instruction_word);
    }
    else if (status == llvm::MCDisassembler::SoftFail)
    {
        fprintf(stderr, "Warning: Soft fail to disassemble instruction at 0x%016llx. Raw: 0x%08x\n", pc, instruction_word);
        // 仍然可以尝试打印，但可能不完全正确
        std::string s;
        llvm::raw_string_ostream OS(s);
        TheInstPrinter->printInst(&MI, current_address, "", *TheSubtargetInfo, OS);
        printf("0x%016llx: 0x%08x\t%s (Soft Fail)\n", pc, instruction_word, OS.str().c_str());
    }
}

#else // CONFIG_ITRACE is not defined

// 当 CONFIG_ITRACE 未定义时，提供空实现，避免编译错误
extern "C" void init_disasm_llvm()
{
    // 空函数体
}

extern "C" void free_disasm_llvm()
{
    // 空函数体
}

extern "C" void itrace_print(long long pc, unsigned int instruction_word, int instr_len_bytes)
{
    // 空函数体
}

#endif // CONFIG_ITRACE