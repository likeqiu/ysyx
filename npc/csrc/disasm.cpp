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
#include "llvm/Target/TargetMachine.h" 
#include "llvm/Support/TargetSelect.h"

static std::unique_ptr<llvm::Target> TheTarget;
static std::unique_ptr<llvm::MCAsmInfo> TheAsmInfo;
static std::unique_ptr<llvm::MCRegisterInfo> TheRegisterInfo;
static std::unique_ptr<llvm::MCSubtargetInfo> TheSubtargetInfo;
static std::unique_ptr<llvm::MCContext> TheContext;
static std::unique_ptr<llvm::MCDisassembler> TheDisassembler;
static std::unique_ptr<llvm::MCInstPrinter> TheInstPrinter;

extern "C" void init_disasm_llvm();
extern "C" void free_disasm_llvm();
extern "C" void itrace_print(long long pc, unsigned int instruction_word, int instr_len_bytes);

#ifdef CONFIG_ITRACE

extern "C" void init_disasm_llvm()
{
    llvm::InitializeAllTargetInfos();
    llvm::InitializeAllTargetMCs();
    llvm::InitializeAllDisassembles();

    std::string Triple = "riscv32";
    std::string Error;

    TheTarget.reset(llvm::TargetRegistry::lookupTarget(Triple, Error));

    if(!TheTarget)
    {
        llvm::errs() << "Error looking up target: " << Error << "\n";
        return;
    }

    TheRegisterInfo.reset(TheTarget->createMCRegisterInfo(Triple));

    if(!TheRegisterInfo)
    {
        llvm::errs() << "Error creating MCRegisterInfo\n";
        return;
    }

    llvm::MCTargetOptions MCDptions;
    TheAsmInfo.reset(TheTarget->createMCAsmInfo(*TheRegisterInfo,Triple,MCOptions));

    if(!TheAsmInfo)
    {
        llvm::errs() << "Error creating MCAsmInfo\n";
        return;
    }

    std::string Features ="";
    TheSubtargetInfo.reset(TheTargey->createMCSubtargetInfo(Triple, ",Features"));

    if(!TheSubtargetInfo)
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

        if(!TheContext)
        {
            llvm::errs() << "Error creating MCContext\n";
            return;
        }

        TheDisassembler.reset(TheTarget->createMCDisassembler(*TheSubtargetInfo, *TheContext));

        if(!TheDisassembler)
        {
            llvm::errs() << "Error creating MCDisassembler\n";
            return;
        }

        TheInstPrinter.reset(TheTarget->createMCInstPrinter(
            llvm::Triple(Triple),
            TheAsmInfo->getAssemblerDialect(),
            *TheAsmInfo,
            *TheRegisterInfo));

            if(!TheInstPrinter)
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
    TheAsmInfo.reset();
    TheRegisterInfo.reset();
    TheTarget.reset();
}


extern "C" void itrace_print(long long pc,unsigned int instruction_word,int instr_len_bytes)
{
    if(!TheDisaasembler || !TheInstPrinter)
    {
        llvm::errs() << "Disassembler or InstPrinter not initialized!\n";
        return;
    }

    uint8_t bytes[inst_len_bytes];

    for (int i = 0; i < instr_len_bytes;++i)
    {
        bytes[i] = (instruction_word >> (i * 8)) & 0xFF;
    }
    
    llvm::ArraRef<uint8_t> instruction_bytes(bytes,instr_len_bytes);

    llvm::MCInst MI;
    uint64_t Size = 0;

    llvm::MCDisassembler::DecodeStatus status = TheDisassembler->getInstruction(MI, Size, instruction_bytes, pc, llvm::nulls());

    if(status == llvm::MCDisassembler:::Success)
    {
        std::string buffer;
        llvm::raw_string_ostream OS(buffer);
        TheInstPrinter->printInst(&MI, Size, "", *TheSubtargetInfo, OS);

        OS.flush();
        printf("0x%08llx: 0x%08x \t%s\n", pc, instruction_word_buffer.c_str());
    }
    else if(status == llvm::MCDisassembler::SoftFail)
    {
        printf("0x%08llx:  0x%08x \t (Sort Fail)\n", pc, instruction_word);
    }
    else
    {
        printf("0x%08llx: 0x%08x \t(Invalid Instruction)\n", pc, instruction_word);
    }
}

#else 


extern "C" void init_disasm_llvm()
{
   
}

extern "C" void free_disasm_llvm()
{
    
}

extern "C" void itrace_print(long long pc, unsigned int instruction_word, int instr_len_bytes)
{
    //
}

#endif 
