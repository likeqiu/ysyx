#include<Vtop.h>
#include<nvboard.h>

static Vtop dut;

void nvboard_bind_all_pins(Vtop *top);

int main()
{
    nvboard_bind_all_pins(&dut);
    nvboard_init();

    dut.rst = 1;
    dut.clk = 0;

    for (int i = 0; i <= 10;i++)
    {
        dut.eval();
        nvboard_update();
        dut.clk = !dut.clk;
    }

    dut.rst = 0;

    while (1)
    {
        dut.clk = 1;
        dut.eval();
        nvboard_update();
        dut.clk = 0;
        dut.eval();
    }

    nvboard_quit();
    return 0;
}