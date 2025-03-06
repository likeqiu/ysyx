#include <Vtop.h>
#include <verilated.h>
#include <verilated_fst_c.h>

void single_cycle()
{
    top->clk = 0;
    top->eval();

    top->clk = 1;
    top->eval();
}

void reset(int n){
    top->rst = 1;
    while(n-- > 0)
        sigle_cycle();
    top->rst = 0;
}

int main(int argc,char **argv)
{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    Vtop *top = new Vtop;
    VerilatedFstC *trace = new VerilatedFstC;

    top->trace(trace, 5);
    trace->open("waveform.fst");

    top->clk = 0;
    top->rst = 0;

    reset(10);
    
    for (int i = 0; i <=5000000 * 6; i++)
    {
        single_cycle();
        trace->dump(i);

    }
    trace->close();
    delete top;
    delete trace;
    return 0;
}
