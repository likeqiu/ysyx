#include <Vysyx_25040109_top.h>
#include<verilated.h>
#include <verilated_fst_c.h>
#include<vector>
#include <cstdint>
#include<stdexcept>
#include<iostream>
#include<fstream>

using namespace std;

Vysyx_25040109_top *top = new Vysyx_25040109_top;

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

    void load_bin(const string  &filename){
        ifstream file(filename, ios::binary);
        // ios::binary，表示按二进制打开 if (!file)

        if(!file){
            throw runtime_error("Cannot open file:" + filename);
        }
        uint32_t addr = 0x80000000;
        char inst[4];
        while(file.read(inst,4))
        {
            pmem_write(addr, *(uint32_t*)inst);
            addr += 4;
        }
        file.close();
    }

    void resrt()
    {
        fill(mem.begin(), mem.end(),0);
    }
};

extern "C"  int printf_finish(uint32_t inst)
{
    if (inst == 0x00100073)
    {
        uint32_t a0 = top->a0_out; // 从 CPU 的寄存器堆中读取 x10（即 a0）寄存器的值，保存到变量 a0 中。后面用它来判断 ECALL 的返回值
        printf("finish program\n");
        return 0;
    }

    return 1;
}

    

int main(int argc,char **argv){

    Verilated::commandArgs(argc, argv);
    
    Verilated::traceEverOn(true);
    VerilatedFstC *tfp = new VerilatedFstC;

    top->trace(tfp, 99);
    tfp->open("sim.fst");

    InstructionMemry imem(1024);

    if(argc < 2){
        cerr << "Usage:" << argv[0] << "<bin_file" << endl;
        return 1;
    }
    /*imem.pmem_write(0x80000000, 0x00500293);
    imem.pmem_write(0x80000004, 0x00600313);
    imem.pmem_write(0x80000008, 0x00700393);
    imem.pmem_write(0x8000000c, 0x00100073);*/

    try{
        imem.load_bin(argv[1]);
    }catch(const exception &e){
        cerr << "Erroe loading bin:" << e.what() << endl;
        return 1;
    }
    

    vluint64_t sim_time = 0;
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
    while (!Verilated::gotFinish() && i<10)
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

    tfp->close();
    top->final();
    delete top;
    delete tfp;
    return 0;
}


