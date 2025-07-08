#include<verilog_init.h>

Vysyx_25040109_top *top = new Vysyx_25040109_top;
VerilatedFstC *tfp = new VerilatedFstC;
vluint64_t sim_time = 0;

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

