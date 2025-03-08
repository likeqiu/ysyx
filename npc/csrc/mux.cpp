#include<Vtop.h>
#include<nvboard.h>
#include<verilated.h>
#include<verilated_fst_c.h>
#include<stdio.h>

Vtop *top = new Vtop;

void nvboard_bind_all_pins(Vtop *top);
void start_nvboard(Vtop *top)
{
    nvboard_bind_all_pins(top);
    nvboard_init();

}

VerilatedFstC *wave_init(int argc, char **argv, Vtop *top);

int main(int argc, char **argv)
{
    start_nvboard(top);
    VerilatedFstC *trace = wave_init(argc, argv, top);

    top->X0 = 1;
    top->X1 = 2;
    top->X2 = 3;
    top->X3 = 0;

    int number = 0;
    int a = 0;
    while (1)
    {
        printf("输入:\n0->led0,X0\n1->led1,X1\n2->led2,X2\n3->led3,X3\n");
        
        top->Y = number;

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