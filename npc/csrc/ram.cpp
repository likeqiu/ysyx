


#include"common.h"
#include"ram.h"
#include"sdb.h"

using namespace std;

Vysyx_25040109_top *top = new Vysyx_25040109_top;
VerilatedFstC *tfp = new VerilatedFstC;
vluint64_t sim_time = 0;




extern "C" int printf_finish(uint32_t inst)
{
    if (inst == 0x00100073 || inst == 0x00000073)
    {
        uint32_t a0 = top->a0_out; // 从 CPU 的寄存器堆中读取 x10（即 a0）寄存器的值，保存到变量 a0 中。后面用它来判断 ECALL 的返回值
        printf("Finish program (%s),  Hit a \033[1;%dm%s\033[0m TRAP\n",
               inst == 0x00100073 ? "EBREAK" : "ECALL",
               a0 == 0 ? 32 : 31, 
               a0 == 0 ? "GOOD" : "BAD");
        return (inst == 0x00000073 && a0 !=0) ? 1 : 0;
    }

    return 1;
}



int main(int argc,char **argv){
    //top->a0_out = 1;测试

    Verilated::commandArgs(argc, argv);

    Verilated::traceEverOn(true);
    

    top->trace(tfp, 99);
    tfp->open("sim.fst");

    InstructionMemry imem(1024);
    

    if(argc < 2){
        cerr << "Usage:" << argv[0] << "<bin_file" << endl;
        return 1;
    }


    try{
        imem.load_bin(argv[1]);
    }catch(const exception &e){
        cerr << "Erroe loading bin:" << e.what() << endl;
        return 1;
    }

    /*imem.pmem_write(0x80000000, 0x00500293);
    imem.pmem_write(0x80000004, 0x00600313);
    imem.pmem_write(0x80000008, 0x00700393);*/


    
    // vl 前缀表示 Verilator Long（Verilator专用）

    top->clk = 0;
    top->eval();
    top->rst = 1;
    top->clk = 1;
    top->eval();
    tfp->dump(sim_time++);
    top->rst = 0;


    cout << "After reset: PC = 0x" << hex << top->pc << dec << endl;

    /*Verilated::gotFinish() 是 Verilator 仿真库中的一个 静态函数，用于判断 Verilog 仿真模型是否调用了 $finish 系统任务。*/
    int i = 0;
    while (!Verilated::gotFinish() )
    {
        i++;

        top->clk = 0;
        top->eval();
        tfp->dump(sim_time++);

        /*try-catch 这就是一个会“抛出异常”的函数。如果你没有用 try-catch，程序会崩溃终止。有了 try-catch，就可以优雅地退出仿真，同时打印有用的调试信息。*/
        try
        {
            top->inst = imem.pmem_read(top->pc);
        }
        catch (const exception &e)
        {
            cerr << "Cycle" << ":" << e.what() << endl;
            /*e.what() 是 C++ 中异常类（如 std::exception）的一个成员函数，用于返回异常的详细信息（错误描述），类型为 const char,抛出的信息取决于前边定义的throw内容*/
            break;
        }
       

        top->clk = 1;
        top->eval();
        tfp->dump(sim_time++);


    }

 
    sdb_mainloop();
    tfp->close();
    top->final();
    delete top;
    delete tfp;
    return 0;
}


