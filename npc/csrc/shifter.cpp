#include <Vtop.h>
#include <nvboard.h>

static Vtop dut;

void nvboard_bind_all_pins(Vtop *top);

static void single_cycle()
{
    dut.clk = 0;
    dut.eval();
    dut.clk = 1;
    dut.eval();
    
}

int main()
{
    nvboard_bind_all_pins(&dut);
    nvboard_init();

    int count = 0;

    while (1)
    { 
        if(count==50){
            nvboard_update();
            count = 0;
        }
        else
        {
            count++;
        }

    return 0;
}
