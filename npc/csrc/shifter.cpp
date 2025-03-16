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
    usleep(1);
}

int main()
{
    nvboard_bind_all_pins(&dut);
    nvboard_init();

    dut.reset = 1;
    nvboard_update;
    
    while (1)
    {
        nvboard_update();
        single_cycle();
    }

    return 0;
}