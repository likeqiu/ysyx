#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vtop.h"
#include "verilated.h"
#include "verilated_fst_c.h" // ✅ 使用 VerilatedFstC

int main()
{
    Verilated::traceEverOn(true);

    Vtop *top = new Vtop;                   // 先实例化 top
    VerilatedFstC *tfp = new VerilatedFstC; // ✅ 使用 FST
    top->trace(tfp, 99);                    // 99 是跟踪深度
    tfp->open("top.fst");                   // ✅ 生成 .fst 波形文件

    for (int i = 0; i < 10; i++)
    { // 运行 10 个仿真周期
        int a = rand() & 1;
        int b = rand() & 1;
        top->a = a;
        top->b = b;

        top->eval();  // 运行仿真
        tfp->dump(i); // 记录波形

        printf("a=%d, b=%d, f=%d\n", a, b, top->f);
        assert(top->f == (a ^ b)); // 验证仿真结果
    }

    tfp->close();
    delete top;
    delete tfp;
    return 0;
}
