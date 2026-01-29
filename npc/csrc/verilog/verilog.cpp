#include <isa.h>
#include<paddr.h>
#include<verilog.h>
#include<verilog_init.h>
#include <cpu/decode.h>

extern Decode lastest_decode;


extern "C" int pmem_read(int raddr)
{
    // 总是读取地址为`raddr & ~0x3u`的4字节返回
    paddr_t aligned = (paddr_t)raddr & ~0x3u;
    return (int)paddr_read(aligned, 4);
}

extern "C" void pmem_write(int waddr, int wdata, char wmask)
{
    // 总是往地址为`waddr & ~0x3u`的4字节按写掩码`wmask`写入`wdata`
    paddr_t aligned = (paddr_t)waddr & ~0x3u;
    uint32_t old = paddr_read(aligned, 4);
    uint32_t data = (uint32_t)wdata;
    uint8_t mask = (uint8_t)wmask;
    uint32_t merged = old;

    for (int i = 0; i < 4; i++) {
        if (mask & (1u << i)) {
            uint32_t byte_mask = 0xFFu << (i * 8);
            merged = (merged & ~byte_mask) | (data & byte_mask);
        }
    }

    paddr_write(aligned, 4, merged);
}

extern "C" int pmem_read_ok(int addr) {
    return paddr_is_valid((paddr_t)addr) ? 1 : 0;
}  


/*
extern "C" int printf_finish(uint32_t inst)
{
    if (inst == 0x00100073 || inst == 0x00000073)
    {
        uint32_t a0 = top->a0_out;
        std::cout << "Finish program (" << (inst == 0x00100073 ? "EBREAK" : "ECALL")
                  << "), Hit a \033[1;" << (a0 == 0 ? 32 : 31) << "m"
                  << (a0 == 0 ? "GOOD" : "BAD") << "\033[0m TRAP\n";

        npc_state.state = (inst == 0x00000073 && a0 != 0) ? NPC_STOP : NPC_END;
        return (inst == 0x00000073 && a0 != 0) ? 1 : 0;
    }

    return 1;
}*/


extern "C" int printf_finish(uint32_t inst)
{
    if (inst == 0x00100073 )
    {
        uint32_t a0 = top->a0_out;
        std::cout << "Finish program (" << (inst == 0x00100073 ? "EBREAK" : "ECALL")
                  << "), Hit a \033[1;" << (a0 == 0 ? 32 : 31) << "m"
                  << (a0 == 0 ? "GOOD" : "BAD") << "\033[0m TRAP\n";

        npc_state.state = (inst == 0x00000073 && a0 != 0) ? NPC_STOP : NPC_END;
        return (inst == 0x00000073 && a0 != 0) ? 1 : 0;
    }

    return 1;
}




extern "C" void update_cpu_state(uint32_t pc, const uint32_t regs[32])
{
    cpu.pc = pc;
    for (int i = 0; i < 32;i++)
    {
        cpu.gpr[i] = regs[i];
        cpu.gpr[i] = top->rootp->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[i];
    }
        
}

extern "C" void update_decode_state(vaddr_t pc,vaddr_t snpc ,vaddr_t dnpc,uint32_t inst){
    lastest_decode.pc = pc;
    lastest_decode.snpc = pc + 4;
    lastest_decode.dnpc = dnpc;
    lastest_decode.isa.inst = inst;

}
extern "C" void trap_record(int pc,int cause){
    std::cout << "pc: " << pc << ", cause:  " << cause << std::endl;

}
