#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<Vtop.h>


int main()
{
    Vtop *top = new top;
    while(1)
    {
        int a = rand() & 1;
        int b = rand() & 1;
        top->a = a;
        top->b = b;

        top_eval();
        printf("a=%d,b=%d,f=%d\n", top->a, top->b, top->f);
        assert(top->f == a ^ b);
    }
}