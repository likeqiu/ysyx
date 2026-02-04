#include<verilog_init.h>
#include<iostream>


VTop *top = new Vysyx_25040109_top;
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

        std::cout << "After reset: PC = 0x" << std::hex << top->pc << std::dec << std::endl;
}

extern "C" void clear_verilog(){
    tfp->close();
    top->final();
    delete top;
    delete tfp;
    return;
}

