// llvm_wrapper.cpp - LLVM C包装器
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
#include "llvm/MC/MCInstrInfo.h"
#include "llvm/Target/TargetMachine.h"
#include "llvm/Support/TargetSelect.h"

// C接口结构体
struct LLVMDisasmContext
{
    const llvm::Target *target;
    std::unique_ptr<llvm::MCAsmInfo> asmInfo;
    std::unique_ptr<llvm::MCRegisterInfo> registerInfo;
    std::unique_ptr<llvm::MCInstrInfo> instrInfo;
    std::unique_ptr<llvm::MCSubtargetInfo> subtargetInfo;
    std::unique_ptr<llvm::MCContext> context;
    std::unique_ptr<llvm::MCDisassembler> disassembler;
    std::unique_ptr<llvm::MCInstPrinter> instPrinter;
};

static LLVMDisasmContext *g_ctx = nullptr;

extern "C"
{

    // 初始化反汇编器
    int llvm_disasm_init(const char *triple_str)
    {
        if (g_ctx)
        {
            return 1; // 已经初始化
        }

        g_ctx = new LLVMDisasmContext();

        llvm::InitializeAllTargetInfos();
        llvm::InitializeAllTargetMCs();
        llvm::InitializeAllDisassemblers();

        std::string Triple = triple_str ? triple_str : "riscv32";
        std::string Error;

        g_ctx->target = llvm::TargetRegistry::lookupTarget(Triple, Error);
        if (!g_ctx->target)
        {
            llvm::errs() << "Error looking up target: " << Error << "\n";
            delete g_ctx;
            g_ctx = nullptr;
            return 0;
        }

        g_ctx->registerInfo.reset(g_ctx->target->createMCRegInfo(Triple));
        if (!g_ctx->registerInfo)
        {
            llvm::errs() << "Error creating MCRegisterInfo\n";
            delete g_ctx;
            g_ctx = nullptr;
            return 0;
        }

        g_ctx->instrInfo.reset(g_ctx->target->createMCInstrInfo());
        if (!g_ctx->instrInfo)
        {
            llvm::errs() << "Error creating MCInstrInfo\n";
            delete g_ctx;
            g_ctx = nullptr;
            return 0;
        }

        llvm::MCTargetOptions MCOptions;
        g_ctx->asmInfo.reset(g_ctx->target->createMCAsmInfo(*g_ctx->registerInfo, Triple, MCOptions));
        if (!g_ctx->asmInfo)
        {
            llvm::errs() << "Error creating MCAsmInfo\n";
            delete g_ctx;
            g_ctx = nullptr;
            return 0;
        }

        std::string Features = "";
        g_ctx->subtargetInfo.reset(g_ctx->target->createMCSubtargetInfo(Triple, "", Features));
        if (!g_ctx->subtargetInfo)
        {
            llvm::errs() << "Error creating MCSubtargetInfo\n";
            delete g_ctx;
            g_ctx = nullptr;
            return 0;
        }

        g_ctx->context.reset(new llvm::MCContext(
            llvm::Triple(Triple),
            g_ctx->asmInfo.get(),
            g_ctx->registerInfo.get(),
            g_ctx->subtargetInfo.get(),
            nullptr,
            nullptr,
            false,
            ""));

        if (!g_ctx->context)
        {
            llvm::errs() << "Error creating MCContext\n";
            delete g_ctx;
            g_ctx = nullptr;
            return 0;
        }

        g_ctx->disassembler.reset(g_ctx->target->createMCDisassembler(*g_ctx->subtargetInfo, *g_ctx->context));
        if (!g_ctx->disassembler)
        {
            llvm::errs() << "Error creating MCDisassembler\n";
            delete g_ctx;
            g_ctx = nullptr;
            return 0;
        }

        g_ctx->instPrinter.reset(g_ctx->target->createMCInstPrinter(
            llvm::Triple(Triple),
            g_ctx->asmInfo->getAssemblerDialect(),
            *g_ctx->asmInfo,
            *g_ctx->instrInfo,
            *g_ctx->registerInfo));

        if (!g_ctx->instPrinter)
        {
            llvm::errs() << "Error creating MCInstPrinter\n";
            delete g_ctx;
            g_ctx = nullptr;
            return 0;
        }

        return 1;
    }

    // 反汇编指令
    int llvm_disasm_instruction(uint64_t pc, uint32_t instruction_word,
                                int instr_len_bytes, char *output, size_t output_size)
    {
        if (!g_ctx)
        {
            return 0;
        }

        uint8_t bytes[instr_len_bytes];
        for (int i = 0; i < instr_len_bytes; ++i)
        {
            bytes[i] = (instruction_word >> (i * 8)) & 0xFF;
        }

        llvm::ArrayRef<uint8_t> instruction_bytes(bytes, instr_len_bytes);
        llvm::MCInst MI;
        uint64_t Size = 0;

        llvm::MCDisassembler::DecodeStatus status =
            g_ctx->disassembler->getInstruction(MI, Size, instruction_bytes, pc, llvm::nulls());

        if (status == llvm::MCDisassembler::Success)
        {
            std::string buffer;
            llvm::raw_string_ostream OS(buffer);
            g_ctx->instPrinter->printInst(&MI, Size, "", *g_ctx->subtargetInfo, OS);
            OS.flush();

            snprintf(output, output_size, "%s", buffer.c_str());
            return 1;
        }
        else if (status == llvm::MCDisassembler::SoftFail)
        {
            snprintf(output, output_size, "(Soft Fail)");
            return 2;
        }
        else
        {
            snprintf(output, output_size, "(Invalid Instruction)");
            return 3;
        }
    }

    // 清理资源
    void llvm_disasm_cleanup()
    {
        if (g_ctx)
        {
            delete g_ctx;
            g_ctx = nullptr;
        }
    }

} // extern "C"