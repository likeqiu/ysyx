
#include<assert.h>
#include<stdio.h>
#include<Vtop.h>

Vtop *top = new Vtop;

void single_cycle()
{
    top->clk = 0;
    top->eval();
    top->clk = 1;
    top->eval();

}
void reset(int n)
{
    top->rst = 1;
    while(n-- >0) single_cycle();
    top->rst = 0;

}

int main()
{
  

    reset(10);

    while(1)
    {
        single_cycle();
        printf("reg=%d\n", top->led);
    }
    delete top;
}
