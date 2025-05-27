#include <llvm/MC/MCAsmInfo.h>
#include <llvm/MC/MCDisassembler/MCDisassembler.h>
#include <llvm/MC/MCInst.h>
#include <llvm/MC/MCInstrInfo.h>
#include <llvm/MC/MCContext.h>
#include <llvm/MC/TargetRegistry.h>
#include <llvm/Support/TargetSelect.h>
#include <iostream>
#include <iomanip>

// 使用 LLVM 命名空间
using namespace llvm;

namespace
{
    // 全局静态变量
    static bool initialized = false;
    static std::unique_ptr<MCRegisterInfo> mri;
    static std::unique_ptr<MCAsmInfo> mai;
    static std::unique_ptr<MCInstrInfo> mii;
    static std::unique_ptr<MCContext> ctx;
    static std::unique_ptr<MCDisassembler> disasm;
    static const Target *target;

    // 初始化 LLVM
    void init_llvm()
    {
        if (initialized)
            return;

        // 初始化 RISC-V 目标
        LLVMInitializeRISCVCpu0Target();
        LLVMInitializeRISCVCpu0TargetInfo();
        LLVMInitializeRISCVCpu0TargetMC();
        LLVMInitializeRISCVCpu0Disassembler();

        Triple triple("riscv32-unknown-elf");
        std::string error;
        target = TargetRegistry::lookupTarget(triple.str(), error);
        if (!target)
        {
            std::cerr << "Failed to initialize target: " << error << std::endl;
            return;
        }

        mri = std::unique_ptr<MCRegisterInfo>(target->createMCRegInfo(triple.str()));
        mai = std::unique_ptr<MCAsmInfo>(target->createMCAsmInfo(*mri, triple.str(), MCTargetOptions()));
        mii = std::unique_ptr<MCInstrInfo>(target->createMCInstrInfo());
        ctx = std::unique_ptr<MCContext>(new MCContext(triple, mai.get(), mri.get(), nullptr));
        disasm = std::unique_ptr<MCDisassembler>(target->createMCDisassembler(*ctx, MCTargetOptions()));
        initialized = true;
    }

    // 反汇编指令（itrace）
    void disassemble_inst(uint32_t inst, uint64_t pc)
    {
        init_llvm();
        if (!target || !disasm)
        {
            std::cerr << "LLVM not initialized" << std::endl;
            return;
        }

        // 转换为字节数组（RISC-V 小端序）
        uint8_t inst_bytes[4] = {
            static_cast<uint8_t>(inst & 0xFF),
            static_cast<uint8_t>((inst >> 8) & 0xFF),
            static_cast<uint8_t>((inst >> 16) & 0xFF),
            static_cast<uint8_t>((inst >> 24) & 0xFF)};

        MCInst inst_out;
        uint64_t size;
        MCDisassembler::DecodeStatus status = disasm->getInstruction(inst_out, size, ArrayRef<uint8_t>(inst_bytes, 4), pc, nulls());
        if (status == MCDisassembler::Success)
        {
            std::string inst_str;
            raw_string_ostream os(inst_str);
            target->createMCInstPrinter(*mai, 0, *ctx)->printInst(&inst_out, pc, "", *ctx, os);
            std::cout << "0x" << std::hex << std::setw(8) << std::setfill('0') << pc << ": " << inst_str << std::endl;
        }
        else
        {
            std::cerr << "Disassembly failed for inst: 0x" << std::hex << inst << " at PC: 0x" << pc << std::endl;
        }
    }

    // 函数调用分析（ftrace）
    void ftrace_analyze(const MCInst &inst, uint64_t pc)
    {
        init_llvm();
        if (!mii)
        {
            std::cerr << "MCInstrInfo not initialized" << std::endl;
            return;
        }

        unsigned opcode = inst.getOpcode();
        const MCInstrDesc &desc = mii->get(opcode);
        if (desc.isCall())
        {
            std::string inst_str;
            raw_string_ostream os(inst_str);
            target->createMCInstPrinter(*mai, 0, *ctx)->printInst(&inst, pc, "", *ctx, os);
            std::cout << "Call: " << inst_str << " at 0x" << std::hex << pc << std::endl;
        }
        else if (desc.isReturn())
        {
            std::cout << "Return at 0x" << std::hex << pc << std::endl;
        }
    }
} // 匿名命名空间

// DPI-C 接口
extern "C" void get_current_inst(uint32_t inst, uint32_t pc)
{
    disassemble_inst(inst, pc); // itrace
    // 如果启用 ftrace，可调用 ftrace_analyze
}