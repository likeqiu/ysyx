#include<Vwater_fall_light.h>
#include<assert.h>
#include<stdio.h>

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
    Vwater_fall_light *top = new Vwater_fall_light;

    reset(10);

    while(1)
    {
        single_cycle();
        printf("reg=%d\n", top->led);
    }
    delete top;
}
