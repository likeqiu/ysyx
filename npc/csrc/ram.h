#ifndef _RAM_H_
#define _RAM_H_

#include <Vysyx_25040109_top.h>
#include <verilated_fst_c.h>
#include <verilated.h>
#include "common.h"
using namespace std;

enum class NPC_STATE
{
    RUNNING = 0;
    QUIT = 1;
    END = 2;
    HALT = 3;
};

extern Vysyx_25040109_top *top;
extern VerilatedFstC *tfp;
extern vluint64_t sim_time;
extern NPC_STATE npc_state;

class InstructionMemry
{
private:
    // 32位，4字节
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
    InstructionMemry(size_t size) : size(size)
    {
        if (size == 0)
        {
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

    void load_bin(const string &filename)
    {
        ifstream file(filename, ios::binary);
        // ios::binary，表示按二进制打开 if (!file)

        if (!file)
        {
            throw runtime_error("Cannot open file:" + filename);
        }
        uint32_t addr = 0x80000000;
        char inst[4];
        while (file.read(inst, 4))
        {
            pmem_write(addr, *(uint32_t *)inst);
            addr += 4;
        }
        file.close();
    }

    void resrt()
    {
        fill(mem.begin(), mem.end(), 0);
    }
};

extern InstructionMemry imem;

#endif
