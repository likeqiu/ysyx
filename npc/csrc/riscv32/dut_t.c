#include <isa.h>
#include<cpu/difftest.h>
#include "../local-include/reg.h"

#ifdef __cplusplus
extern "C" {
#endif
void clear_verilog(void);
#ifdef __cplusplus
}
#endif

extern const char *regs[];

bool  isa_difftest_checkregs(CPU_state *ref_r,vaddr_t pc){

    for (int i = 1; i < 32;i++){

        if(i == 0 && (cpu.gpr[0] != 0 || ref_r->gpr[0] != 0)){
            clear_verilog();
            Log("Register %s mismatch: DUT = 0x%08x, REF = 0x%08x at PC = 0x%08x\n",regs[i], cpu.gpr[i], ref_r->gpr[i], pc);
            return false;
        }

        
        if(cpu.gpr[i] != ref_r->gpr[i]){
            clear_verilog();
            Log("Register %s mismatch: DUT = 0x%08x, REF = 0x%08x at PC = 0x%08x\n",
                regs[i], cpu.gpr[i], ref_r->gpr[i], pc);
            return false;
        }
    }


    if(cpu.pc != ref_r->pc){

        clear_verilog();
        Log("PC mismatch: DUT = 0x%lx, REF = 0x%lx at PC = 0x%lx\n", (unsigned long)cpu.pc, (unsigned long)ref_r->pc, (unsigned long)pc);
        return false;
    }

    return true;
}

void isa_difftest_attach(){
    
}
