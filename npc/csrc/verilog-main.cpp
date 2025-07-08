#include<verilog_init.h>

extern "C" void init_verilog(int argc, char **argv)
{

    Verilated::commandArgs(argc, argv);

    Verilated::traceEverOn(true);

        top->trace(tfp, 99);
        tfp->open("sim.fst");
}


extern "C" void clear_verilog(){
    tfp->close();
    top->final();
    delete top;
    delete tfp;
    return;
}

