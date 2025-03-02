#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<Vtop.h>
#include<verilated.h>

Verilated::traceEverOn(true);

int main()
{
    Vtop *top = new Vtop;
    while(1)
    {
        int a = rand() & 1;
        int b = rand() & 1;
        top->a = a;
        top->b = b;

        top->eval();
        printf("a=%d,b=%d,f=%d\n", top->a, top->b, top->f);
        assert(top->f == a ^ b);
    }
}