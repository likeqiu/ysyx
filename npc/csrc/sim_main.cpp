#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <Vtop.h>
#include <verilated.h>
#include <verilated_fst_c.h> // 确保使用 VerilatedFstC

int main()
{
    Verilated::traceEverOn(true);

    Vtop *top = new Vtop; // 必须先创建 top 实例
    VerilatedFstC *tfp = new VerilatedFstC;
    top->trace(tfp, 99); // 设置跟踪深度
    tfp->open("top.fst");

    for (int i = 0; i < 20; i++)
    { // 运行 20 个时钟周期
        top->a = rand() & 1;
        top->b = rand() & 1;

        top->eval();
        tfp->dump(i); // **关键：写入波形数据**

        printf("a=%d, b=%d, f=%d\n", top->a, top->b, top->f);
        assert(top->f == (top->a ^ top->b));
    }

    tfp->close();
    delete top;
    delete tfp;
    return 0;
}
