#include "ram.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Support/Error.h"
#include "llvm/MC/TargetRegistry.h"
#include "llvm/Support/InitLLVM.h"
#include "llvm/ADT/ArrayRef.h"
#include "llvm/MC/MCAsmInfo.h"
#include "llvm/MC/MCContext.h"
#include "llvm/MC/MCDisassembler/MCDisassembler.h"
#include "llvm/MC/MCInst.h"
#include "llvm/MC/MCInstPrinter.h"
#include "llvm/MC/MCRegisterInfo.h"
#include "llvm/MC/MCSubtargetInfo.h"
#include "llvm/MC/MCTargetOptions.h"
#include "llvm/MC/MCInstrInfo.h" // 添加这个头文件
#include "llvm/Target/TargetMachine.h"
#include "llvm/Support/TargetSelect.h"

static const llvm::Target *TheTarget; // 改为const指针
static std::unique_ptr<llvm::MCAsmInfo> TheAsmInfo;
static std::unique_ptr<llvm::MCRegisterInfo> TheRegisterInfo;
static std::unique_ptr<llvm::MCInstrInfo> TheInstrInfo; // 添加这个
static std::unique_ptr<llvm::MCSubtargetInfo> TheSubtargetInfo;
static std::unique_ptr<llvm::MCContext> TheContext;
static std::unique_ptr<llvm::MCDisassembler> TheDisassembler;
static std::unique_ptr<llvm::MCInstPrinter> TheInstPrinter;

extern "C" void init_disasm_llvm();
extern "C" void free_disasm_llvm();
extern "C" void itrace_print(long long pc, unsigned int instruction_word, int instr_len_bytes);

extern "C" void init_disasm_llvm()
{
    llvm::InitializeAllTargetInfos();
    llvm::InitializeAllTargetMCs();
    llvm::InitializeAllDisassemblers(); // 修正拼写错误

    std::string Triple = "riscv32";
    std::string Error;

    TheTarget = llvm::TargetRegistry::lookupTarget(Triple, Error); // 移除reset()

    if (!TheTarget)
    {
        llvm::errs() << "Error looking up target: " << Error << "\n";
        return;
    }

    TheRegisterInfo.reset(TheTarget->createMCRegInfo(Triple)); // 修正方法名

    if (!TheRegisterInfo)
    {
        llvm::errs() << "Error creating MCRegisterInfo\n";
        return;
    }

    TheInstrInfo.reset(TheTarget->createMCInstrInfo()); // 添加InstrInfo创建

    if (!TheInstrInfo)
    {
        llvm::errs() << "Error creating MCInstrInfo\n";
        return;
    }

    llvm::MCTargetOptions MCOptions; // 修正变量名
    TheAsmInfo.reset(TheTarget->createMCAsmInfo(*TheRegisterInfo, Triple, MCOptions));

    if (!TheAsmInfo)
    {
        llvm::errs() << "Error creating MCAsmInfo\n";
        return;
    }

    std::string Features = "";
    TheSubtargetInfo.reset(TheTarget->createMCSubtargetInfo(Triple, "", Features)); // 修正变量名和参数

    if (!TheSubtargetInfo)
    {
        llvm::errs() << "Error creating MCSubtargetInfo\n";
        return;
    }

    TheContext.reset(new llvm::MCContext(
        llvm::Triple(Triple),
        TheAsmInfo.get(),
        TheRegisterInfo.get(),
        TheSubtargetInfo.get(),
        nullptr,
        nullptr,
        false,
        ""));

    if (!TheContext)
    {
        llvm::errs() << "Error creating MCContext\n";
        return;
    }

    TheDisassembler.reset(TheTarget->createMCDisassembler(*TheSubtargetInfo, *TheContext));

    if (!TheDisassembler)
    {
        llvm::errs() << "Error creating MCDisassembler\n";
        return;
    }

    TheInstPrinter.reset(TheTarget->createMCInstPrinter(
        llvm::Triple(Triple),
        TheAsmInfo->getAssemblerDialect(),
        *TheAsmInfo,
        *TheInstrInfo, // 添加InstrInfo参数
        *TheRegisterInfo));

    if (!TheInstPrinter)
    {
        llvm::errs() << "Error creating MCInstPrinter\n";
        return;
    }
}

extern "C" void free_disasm_llvm()
{
    TheInstPrinter.reset();
    TheDisassembler.reset();
    TheContext.reset();
    TheSubtargetInfo.reset();
    TheInstrInfo.reset(); // 添加这行
    TheAsmInfo.reset();
    TheRegisterInfo.reset();
    TheTarget = nullptr; // 修改为nullptr赋值
}

extern "C" void itrace_print(long long pc, unsigned int instruction_word, int instr_len_bytes)
{
    if (!TheDisassembler || !TheInstPrinter) // 修正拼写错误
    {
        llvm::errs() << "Disassembler or InstPrinter not initialized!\n";
        return;
    }

    uint8_t bytes[instr_len_bytes]; // 修正变量名

    for (int i = 0; i < instr_len_bytes; ++i)
    {
        bytes[i] = (instruction_word >> (i * 8)) & 0xFF;
    }

    llvm::ArrayRef<uint8_t> instruction_bytes(bytes, instr_len_bytes); // 修正拼写错误

    llvm::MCInst MI;
    uint64_t Size = 0;

    llvm::MCDisassembler::DecodeStatus status = TheDisassembler->getInstruction(MI, Size, instruction_bytes, pc, llvm::nulls());

    if (status == llvm::MCDisassembler::Success) // 修正语法错误
    {
        std::string buffer;
        llvm::raw_string_ostream OS(buffer);
        TheInstPrinter->printInst(&MI, Size, "", *TheSubtargetInfo, OS);

        OS.flush();
        printf("0x%08llx: 0x%08x \t%s\n", pc, instruction_word, buffer.c_str()); // 修正变量名
    }
    else if (status == llvm::MCDisassembler::SoftFail)
    {
        printf("0x%08llx: 0x%08x \t(Soft Fail)\n", pc, instruction_word); // 修正拼写
    }
    else
    {
        printf("0x%08llx: 0x%08x \t(Invalid Instruction)\n", pc, instruction_word);
    }
}