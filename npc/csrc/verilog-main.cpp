#include <Vysyx_25040109_top.h>
#include <verilated_fst_c.h>
#include <verilated.h>
#include <Vysyx_25040109_top___024root.h>



extern 'C' void init_verilog(int argc,char **argv){

    Vysyx_25040109_top *top = new Vysyx_25040109_top;
    VerilatedFstC *tfp = new VerilatedFstC;
    vluint64_t sim_time = 0;
    
    Verilated::commandArgs(argc, argv);

    Verilated::traceEverOn(true);

        top->trace(tfp, 99);
        tfp->open("sim.fst");
}