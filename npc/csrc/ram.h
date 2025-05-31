#ifndef _RAM_H_
#define _RAM_H_

#include <Vysyx_25040109_top.h>
#include <verilated_fst_c.h>
#include <verilated.h>
#include <Vysyx_25040109_top___024root.h>
#include "common.h"
#include"mtrace.h"

#define CONFIG_MBASE 0x80000000
#define CONFIG_MSIZE 0x8000000
#define PMEM_LEFT CONFIG_MBASE
#define PMEM_RIGHT (CONFIG_MBASE + CONFIG_MSIZE - 1)
#define CONFIG_PC_RESET_OFFSET 0x0
#define RESET_VECTOR (PMEM_LEFT + CONFIG_PC_RESET_OFFSET)

extern uint8_t *guest_to_host(paddr_t paddr);
extern paddr_t gost_to_guest(uint8_t *haddr);

extern word_t expr(char *e, bool *success);

extern void init_wp_pool();
extern void init_regex();

typedef struct watchpoint
{
    int NO;
    struct watchpoint *next;
    char *str;
    word_t old_value;
    bool enable;
    char type; // b,m,n

    /* TODO: Add more members if necessary */

} WP;
#define NR_WP 32
extern WP wp_pool[NR_WP];
extern WP *free_;
extern WP *head;
extern WP *new_wp(char *expr_str);
extern void free_wp(WP *wp);

enum class NPC_STATE
{
    RUNNING = 0,
    QUIT = 1,
    END = 2,
    HALT = 3
};

extern Vysyx_25040109_top *top;
extern VerilatedFstC *tfp;
extern vluint64_t sim_time;
extern NPC_STATE npc_state;

class PhysicalMemory
{
private:
    // 32位，4字节
    std::vector<uint8_t> pmem;
    std::size_t size;

    bool in_pmem(uint32_t addr) const
    {
        return addr >= PMEM_LEFT && addr <= PMEM_RIGHT;
    }

public:
    /*
    InstructionMemory(size_t size)：这是构造函数的声明，接收一个参数 size，类型为 size_t，通常用来表示内存的大小。: size(size)：这部分是 构造函数的初始化列表，将构造函数的参数 size 赋值给成员变量 size。
    size（左边）是类的 成员变量，表示指令内存的大小。
    size（右边）是构造函数的 参数，表示传入的内存大小。

    第一个 size 是 构造函数的参数。
    第二个 size 是 类的成员变量，用来存储对象的状态。
    第三个 size 是 初始化列表中的赋值操作，将构造函数的参数赋值给成员变量。*/
    PhysicalMemory(std::size_t mem_size) : size(mem_size)
    {
        if (mem_size == 0)
        {
            throw std::invalid_argument("Invalid Memory size");
        }

        pmem.resize(mem_size, 0);
    }

    // const：修饰成员函数，表示这个函数不会修改类的成员变量，即函数体内不会改变类的任何成员数据。
    uint32_t pmem_read(uint32_t addr, int len) const
    {
        if (len != 1 && len != 2 && len != 4)
        {
            throw std::invalid_argument("Invalid read length: " + std::to_string(len));
        }
        if (!in_pmem(addr))
        {
            throw std::out_of_range("Address out of range:" + std::to_string(addr));
        }

        uint32_t offset_addr = addr - CONFIG_MBASE;

        if (offset_addr + len > size)
        {
            throw std::out_of_range("Read beyond memory bounds");
        }

        switch (len)
        {
        case 1:
            return pmem[offset_addr];
        case 2:
            return *(uint16_t *)&pmem[offset_addr];
        case 4:
            return *(uint32_t *)&pmem[offset_addr];
        default:
            throw std::invalid_argument("Unsupport read length");
            return 0;
        }
    }

    void pmem_write(uint32_t addr, int len, uint32_t data)
    {

        if (!in_pmem(addr))
        {
            throw std::out_of_range("Address out of range :" + std::to_string(addr));
        }

        if (len != 1 && len != 2 && len != 4)
        {
            throw std::invalid_argument("Invalid write length : " + std::to_string(len));
        }

        uint32_t offset_addr = addr - CONFIG_MBASE;
        if (offset_addr + len > size)
        {
            throw std::out_of_range("Write beyond memory bounds");
        }

        switch (len)
        {
        case 1:
            pmem[offset_addr] = static_cast<uint8_t>(data);
            break;
        case 2:
            *(uint16_t *)&pmem[offset_addr] = static_cast<uint16_t>(data);
            break;
        case 4:
            *(uint32_t *)&pmem[offset_addr] = static_cast<uint32_t>(data);
            // 将 data 的 4 字节二进制内容，按 uint32_t 类型，写入 pmem 中以 offset_addr 为起点的 4 个字节。
            break;
        default:
            throw std::invalid_argument("Unsupported write length");
        }
    }

    void load_bin(const std::string &filename)
    {
        std::ifstream file(filename, std::ios::binary);
        // ios::binary，表示按二进制打开 if (!file)

        if (!file)
        {
            throw std::runtime_error("Cannot open file:" + filename);
        }
        uint32_t addr = CONFIG_MBASE;
        char inst[4];
        while (file.read(inst, 4))
        {
            pmem_write(addr, 4, *(uint32_t *)inst);
            // printf("addr : 0x%x   0x%08x\n", addr,*(uint32_t *)inst);
            addr += 4;
        }
        file.close();
    }

    void reset()
    {
        std::fill(pmem.begin(), pmem.end(), 0);
    }

    std::size_t get_size() const
    {
        return size;
    }
};

extern PhysicalMemory pmem;

#endif