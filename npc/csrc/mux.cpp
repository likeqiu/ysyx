#include<Vtop.h>
#include<nvboard.h>

static Vtop dut;

void nvboard_bind_all_pins(Vtop *top);


int main()
{
    while (1)
    {
        
        dut.eval();   
        usleep(5000);
        dut.eval(); 

        nvboard_update();
        usleep(10);     
    }

    return 0;
}


