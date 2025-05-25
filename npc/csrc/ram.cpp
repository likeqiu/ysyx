
#include"ram.h"
#include"sdb.h"



Vysyx_25040109_top *top = new Vysyx_25040109_top;
VerilatedFstC *tfp = new VerilatedFstC;
vluint64_t sim_time = 0;
alignas(4096)  PhysicalMemory pmem(0x8000000);
//gcc对齐4k
NPC_STATE npc_state = NPC_STATE::HALT;

extern "C" int
printf_finish(uint32_t inst)
{
    if (inst == 0x00100073 || inst == 0x00000073)
    {
        uint32_t a0 = top->a0_out; // 从 CPU 的寄存器堆中读取 x10（即 a0）寄存器的值，保存到变量 a0 中。后面用它来判断 ECALL 的返回值
        std::cout << "Finish program (" << (inst == 0x00100073 ? "EBREAK" : "ECALL")
             << "), Hit a \033[1;" << (a0 == 0 ? 32 : 31) << "m"
             << (a0 == 0 ? "GOOD" : "BAD") << "\033[0m TRAP\n";

        npc_state = NPC_STATE::END;
        return (inst == 0x00000073 && a0 !=0) ? 1 : 0;
    }

    return 1;
}

extern "C" int monitor_pc(paddr_t pc)
{
    for (int i = 0; i < NR_WP;i++)
    {
        WP *wp = &wp_pool[i];
        if (wp->old_value + 4 >= pc && pc!=0)
        {
            std::cout << "Hit a breakpoint   0x" << std::hex << wp->old_value << std::endl;
            return 1;
        }

        bool success = false;
        word_t new_value = expr(wp->str, &success);
        if(new_value != wp->old_value)
        {
            std::cout << "The value changed from" << wp->old_value << "to" << new_value << std::endl;

            wp->old_value = new_value;
            return 1;
        }
    }
    return 0;
}

int main(int argc,char **argv){
    //top->a0_out = 1;测试

    Verilated::commandArgs(argc, argv);

    Verilated::traceEverOn(true);
    

    top->trace(tfp, 99);
    tfp->open("sim.fst");

    init_regex();
    init_wp_pool();

    if (argc < 2)
    {
        std::cerr << "Usage:" << argv[0] << "<bin_file" << std::endl;
        return 1;
    }

    try{
        pmem.load_bin(argv[1]);
    }catch(const std::exception &e){
        std::cerr << "Erroe loading bin:" << e.what() << std::endl;
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


    std::cout << "After reset: PC = 0x" <<std::hex << top->pc << std::dec << std::endl;


    /*Verilated::gotFinish() 是 Verilator 仿真库中的一个 静态函数，用于判断 Verilog 仿真模型是否调用了 $finish 系统任务。*/


 
    sdb_mainloop();
    tfp->close();
    top->final();
    delete top;
    delete tfp;
    return 0;
}


