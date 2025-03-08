#include <stdio.h>
#include <unistd.h>
#include<Vtop.h>
#include<nvboard.h>

static Vtop dut;
void nvboard_bind_all_pins(Vtop *top);

int main()
{
    nvboard_bind_all_pins(&dut);
    nvboard_init();

    int count = 0;

    while (1)
   
        dut.eval();

        if (count % 100 == 0)
        {
            printf("Y=%d, F=%d, LD1=%d, LD0=%d\n",
                   (int)dut.Y, (int)dut.F, (int)dut.LD1, (int)dut.LD0);
        }

        nvboard_update();


        if (count % 1000 < 10)
        {
            usleep(50000); 
        }
        else
        {
            usleep(5); 

        count++;
    }
    nvboard_quit();

    return 0;
}
