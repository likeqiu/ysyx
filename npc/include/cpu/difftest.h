#ifndef _DIFFTEST_H_
#define _DIFFTEST_H_

#include"ram.h"

extern const char *regs[];

bool isa_difftest_checkregs(CPU_state *ref_r,vaddr_t pc)
{
    for (int i = 0; i < 32;i++)
    {
        if(i==0 && (cpu.gpr[0] !=0 || ref_r->gpr[0] !=0))
        {
            printf("Register %s mismatch: DUT = 0x%08x, REF = 0x%08x at PC = 0x%08x\n",regs[i], cpu.gpr[i], ref_r->gpr[i], pc);
            return false;
        }

        if (cpu.gpr[i] != ref_r->gpr[i])
        {
            printf("Register %s mismatch: DUT = 0x%08x, REF = 0x%08x at PC = 0x%08x\n",regs[i], cpu.gpr[i], ref_r->gpr[i], pc);
            return false;
        }
    }

    return true;
}


void isa_difftest_attach(){
    
}

#endif