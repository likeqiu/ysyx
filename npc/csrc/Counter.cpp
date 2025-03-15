#include <VCounterModule.h>
#include <nvboard.h>

static VCounterModule dut;

void nvboard_bind_all_pins(VCounterModule *top);

static void single_cycle()
{
    dut.clock = 0;
    dut.eval();
    dut.clock = 1;
    dut.eval();
}

int main()
{
    nvboard_bind_all_pins(&dut);
    nvboard_init();
    while (1)
    {
        nvboard_update();
        single_cycle();
    }

    return 0;
}