#include<Vtop.h>
#include<nvboard.h>

static Vtop dut;
void nvboard_bind_pins_all(Vtop *top)

void single_cycle()
{
    dut.clk = 0;
    dut.eval();
    dut.clk = 1;
    dut.eval();
}

int main()
{
    nvboard_bind_pins_all(&dut);
    nvboard_init();

    while (1)
    {
        single_cycle();
        nvboard_update();
    }
    nvboard_quit();
    return 0;
}
