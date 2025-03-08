#include<Vtop.h>
#include<nvboard.h>
#include<verilated.h>
#include<verilated_fst_c.h>
#include<stdio.h>

Vtop *top = new Vtop;

void nvboard_bind_all_pins(Vtop *top);
VerilatedFstC *wave_init(int argc, char **argv, Vtop *top);

int main(int argc, char **argv)
{
    nvboard_bind_all_pins(top);
    nvboard_init();

    VerilatedFstC *trace = wave_init(argc, argv, top);
    
    
    int a = 0;
    while (a !=10)
    {

        a++;
        top->eval();
        nvboard_update();
        trace->dump(a);
    }
    nvboard_quit();
    trace->close();
    delete top;
    delete trace;
    return 0;
}


VerilatedFstC *wave_init(int argc,char **argv,Vtop *top)
{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    VerilatedFstC *trace = new VerilatedFstC;

    top->trace(trace, 5);
    trace->open("waveform.fst");
    return trace;
}