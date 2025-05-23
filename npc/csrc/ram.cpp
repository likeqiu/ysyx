
#include"ram.h"
#include"sdb.h"

using namespace std;

Vysyx_25040109_top *top = new Vysyx_25040109_top;
VerilatedFstC *tfp = new VerilatedFstC;
vluint64_t sim_time = 0;
InstructionMemry imem(1024);
NPC_STATE npc_state = NPC_STATE::HALT;

extern "C" int
printf_finish(uint32_t inst)
{
    if (inst == 0x00100073 || inst == 0x00000073)
    {
        uint32_t a0 = top->a0_out; // 从 CPU 的寄存器堆中读取 x10（即 a0）寄存器的值，保存到变量 a0 中。后面用它来判断 ECALL 的返回值
        printf("Finish program (%s),  Hit a \033[1;%dm%s\033[0m TRAP\n",
               inst == 0x00100073 ? "EBREAK" : "ECALL",
               a0 == 0 ? 32 : 31, 
               a0 == 0 ? "GOOD" : "BAD");

        npc_state = NPC_STATE::END;
        return (inst == 0x00000073 && a0 !=0) ? 1 : 0;
    }

    return 1;
}

#define PG_ALIGN __attribute((aligned(4096)))

static uint8_t pmem[0x8000000] PG_ALIGN = {};

uint8_t *guest_to_host(uint32_t paddr) { return pmem + paddr - 0x80000000; }

static inline uint32_t host_read(void *addr, int len)
{
    switch (len)
    {
    case 1:
        return *(uint8_t *)addr;
    case 2:
        return *(uint16_t *)addr;
    case 4:
        return *(uint32_t *)addr;
 
    default:
        assert(0);
    }
}

static uint32_t pmem_read(uint32_t addr, int len)
{
    uint32_t ret = host_read(guest_to_host(addr), len);
    return ret;
}

int main(int argc,char **argv){
    //top->a0_out = 1;测试

    Verilated::commandArgs(argc, argv);

    Verilated::traceEverOn(true);
    

    top->trace(tfp, 99);
    tfp->open("sim.fst");

 

    if (argc < 2)
    {
        cerr << "Usage:" << argv[0] << "<bin_file" << endl;
        return 1;
    }

    try{
        imem.load_bin(argv[1]);
    }catch(const exception &e){
        cerr << "Erroe loading bin:" << e.what() << endl;
        return 1;
    }

    /*imem.pmem_write(0x80000000, 0x00500293);
    imem.pmem_write(0x80000004, 0x00600313);
    imem.pmem_write(0x80000008, 0x00700393);*/


    
    // vl 前缀表示 Verilator Long（Verilator专用）

    top->clk = 0;
    top->eval();
    top->rst = 1;
    top->clk = 1;
    top->eval();
    tfp->dump(sim_time++);
    top->rst = 0;


    cout << "After reset: PC = 0x" << hex << top->pc << dec << endl;

    uint32_t addr = 0x80000000-4;
    printf("addr:%u\n", pmem_read(addr,4));

    /*Verilated::gotFinish() 是 Verilator 仿真库中的一个 静态函数，用于判断 Verilog 仿真模型是否调用了 $finish 系统任务。*/


 
    sdb_mainloop();
    tfp->close();
    top->final();
    delete top;
    delete tfp;
    return 0;
}


