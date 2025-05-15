#include <Vysyx_25040109_top.h>
#include<verilated.h>
#include <verilated_fst_c.h>
#include<vector>
#include <cstdint>
#include<stdexcept>
#include<iostream>

using namespace std;

class InstructionMemry{
private:
    //32位，4字节
    vector<uint32_t> mem;
    size_t size;

public:
    /*
    InstructionMemory(size_t size)：这是构造函数的声明，接收一个参数 size，类型为 size_t，通常用来表示内存的大小。: size(size)：这部分是 构造函数的初始化列表，将构造函数的参数 size 赋值给成员变量 size。
    size（左边）是类的 成员变量，表示指令内存的大小。
    size（右边）是构造函数的 参数，表示传入的内存大小。

    第一个 size 是 构造函数的参数。
    第二个 size 是 类的成员变量，用来存储对象的状态。
    第三个 size 是 初始化列表中的赋值操作，将构造函数的参数赋值给成员变量。*/
    InstructionMemry(size_t size) : size(size){
        if(size == 0){
            throw invalid_argument("Invalid Memory size");
        }

        mem.resize(size, 0);
    }

    // const：修饰成员函数，表示这个函数不会修改类的成员变量，即函数体内不会改变类的任何成员数据。
    uint32_t pmem_read(uint32_t addr) const
    {
        if (addr % 4 != 0)
        {
            throw invalid_argument("Unaligned instruction address");
        }
        uint32_t offset_addr = addr - 0x80000000;
        size_t word_addr = offset_addr >> 2;
        // 字地址（即“第几个字”）,右移 2 位实际上是 除以 4
        if (word_addr >= size)
        {
            throw out_of_range("Address out of range");
        }
        return mem[word_addr];
    }

    void pmem_write(uint32_t addr, uint32_t inst)
    {
        if (addr % 4 != 0)
        {
            throw invalid_argument("Unaligned instruction address");
        }
        uint32_t offset_addr = addr - 0x80000000;
        size_t word_addr = offset_addr >> 2;
        if (word_addr >= size)
        {
            throw out_of_range("Address out of range");
        }
        mem[word_addr] = inst;
    }

    void resrt()
    {
        fill(mem.begin(), mem.end(),0);
    }
};

int main(int argc,char **argv){

    Verilated::commandArgs(argc, argv);
    Vysyx_25040109_top *top = new Vysyx_25040109_top;
    Verilated::traceEverOn(true);
    VerilatedFstC *tfp = new VerilatedFstC;

    top->trace(tfp, 99);
    tfp->open("sim.fst");

    InstructionMemry imem(16);

    imem.pmem_write(0x80000000, 0x00500293);
    imem.pmem_write(0x80000004, 0x00600313);
    imem.pmem_write(0x80000008, 0x00700393);

    const int max_cycles = 5;
    int cycle = 0;
    vluint64_t sim_time = 0;
    // vl 前缀表示 Verilator Long（Verilator专用）
    top->rst = 1;
    for (int i = 0; i < 2; i++)
    { // 两个时钟周期
        top->clk = 0;
        top->eval();
        tfp->dump(sim_time++);
        top->clk = 1;
        top->eval();
        tfp->dump(sim_time++);
    }
    top->rst = 0;
    top->clk = 0;
    top->eval();
    tfp->dump(sim_time++);
    cout << "After reset: PC = 0x" << hex << top->pc << dec << endl;

    /*Verilated::gotFinish() 是 Verilator 仿真库中的一个 静态函数，用于判断 Verilog 仿真模型是否调用了 $finish 系统任务。*/
    while (cycle < max_cycles && !Verilated::gotFinish())
    {
        top->clk = 0;
        top->eval();
        tfp->dump(sim_time++);
        top->clk = 1;
        top->eval();
        tfp->dump(sim_time++);
        cout << "Cycle " << cycle << ": PC = 0x" << hex << top->pc << dec << endl;
        try
        {
            top->inst = imem.pmem_read(top->pc);
            if (top->inst == 0)
            {
                cout << "Empty instruction at PC = 0x" << hex << top->pc << dec << endl;
                break;
            }
        }
        catch (const exception &e)
        {
            cerr << "Cycle " << cycle << ": " << e.what() << endl;
            break;
        }
        cout << "Registers: t0(x5)=0x" << hex << top->regfile->rf[5]
             << ", t1(x6)=0x" << top->regfile->rf[6]
             << ", t2(x7)=0x" << top->regfile->rf[7] << dec << endl;
        cycle++;
    }

    tfp->close();
    top->final();
    delete top;
    delete tfp;
    return 0;
}
