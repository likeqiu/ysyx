
#include<assert.h>
#include<stdio.h>
#include<Vtop.h>
#include<verilated.h>
#include<verilated_fst_c.h>


Vtop *top = new Vtop;
VerilatedFstC *tfp = new VerilatedFstC;
vluint64_t main_time = 0;

void single_cycle()
{
    top->clk = 0;
    top->eval();
    tfp->dump(main_time);
    main_time++;
    printf("reg=%d\n", top->led);
    top->clk = 1;
    top->eval();
    tfp->dump(main_time);
    main_time++;
    printf("reg=%d\n", top->led);
}
void reset(int n)
{
    top->rst = 1;
    while(n-- >0) single_cycle();
    top->rst = 0;

}

int main(int argc,char** argv)
{
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
   
    top->trace(tfp, 99);
    tfp->open("top.fst");
   

    reset(10);

    while(1)
    {
        single_cycle();
      
    }
    tfp->close();

    delete top;
    return 0;
}
