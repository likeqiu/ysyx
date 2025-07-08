#include <isa.h>
#include<paddr.h>
#include<verilog.h>
#include<verilog_init.h>


extern "C" void pmem_read(paddr_t addr,uint32_t *data){
    *data = paddr_read(addr, 4);
}

extern "C" void pmem_write(paddr_t addr, uint32_t data,uint32_t len){
    paddr_write(addr, len, data);
}

extern "C" int printf_finish(uint32_t inst)
{
    if (inst == 0x00100073 || inst == 0x00000073)
    {
        uint32_t a0 = top->a0_out;
        std::cout << "Finish program (" << (inst == 0x00100073 ? "EBREAK" : "ECALL")
                  << "), Hit a \033[1;" << (a0 == 0 ? 32 : 31) << "m"
                  << (a0 == 0 ? "GOOD" : "BAD") << "\033[0m TRAP\n";

        npc_state = (inst == 0x00000073 && a0 != 0) ? NPC_STOP : NPC_END;
        return (inst == 0x00000073 && a0 != 0) ? 1 : 0;
    }

    return 1;
}

extern "C" void update_cpu_state(uint32_t pc, const uint32_t regs[32])
{
    cpu.pc = pc;
    std::memcpy(cpu.gpr, regs, sizeof(cpu.gpr));
}
