#include <verilog_init.h>
#include <cassert>
#include <cstdint>
#include <iostream>


VTop *top = new VTop;
VerilatedFstC *tfp = new VerilatedFstC;
vluint64_t sim_time = 0;



extern "C" void init_verilog(int argc, char **argv)
{

    Verilated::commandArgs(argc, argv);

    Verilated::traceEverOn(true);

        top->trace(tfp, 99);
        tfp->open("sim.fst");

        

        top->clock = 0;
        top->eval();
        top->reset = 1;
        top->clock = 1;
        top->eval();
        tfp->dump(sim_time++);
        top->reset = 0;

#ifndef SOC_TOP
        std::cout << "After reset: PC = 0x" << std::hex << top->pc << std::dec
                  << std::endl;
#else  
    std::cout << "After reset: PC = 0x" << std::hex <<top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__cpu__DOT__pc_fetch << std::dec << std::endl;

#endif
}

extern "C" void clear_verilog(){
    tfp->close();
    top->final();
    delete top;
    delete tfp;
    return;
}
