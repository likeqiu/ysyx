#include<readline/readline.h>
#include<readline/history.h>
#include"ram.h"
#include <Vysyx_25040109_top___024root.h>

using namespace std;


extern "C" void pmem_read(uint32_t addr,uint32_t *data){
    *data = pmem.pmem_read(addr, 4);
}

extern "C" void pmem_write(uint32_t addr,uint32_t data,uint32_t len)
{
    pmem.pmem_write(addr, len, data);
}


extern "C" void sdb_read_reg(uint32_t index,uint32_t *value)
{
    printf("x%d:  0x%08x\n", index, *value);
}

extern "C" void sdb_scan_mem(uint32_t addr,uint32_t *value)
{
    printf("Memory [0x%08x]: 0x%08x\n", addr, *value);
}

extern "C" void debug_exu(uint32_t pc, uint32_t inst, uint32_t rs1_data, uint32_t rd_addr, uint32_t result)
{
    printf("EXU: PC=0x%08x, inst=0x%08x, rs1_data=0x%08x, rd_addr=%d, result=0x%08x\n",
           pc, inst, rs1_data, rd_addr, result);
}

extern int monitor_pc(paddr_t pc)
{
    WP *wp = head;
    for (; wp != nullptr; )
    {

        if (wp->old_value == pc && wp->type == 'b')
        {
            std::cout << "Hit a breakpoint   0x" << std::hex << wp->old_value << std::endl;
            wp = wp->next;
            return 1;
        }

        bool success = false;
        word_t new_value = expr(wp->str, &success);
        if (new_value != wp->old_value && wp->type == 'm')
        {
            std::cout << "The value changed from  " << wp->old_value << "       to   " << new_value << std::endl;

            wp->old_value = new_value;
            return 1;
        }

        wp = wp->next;
    }
    return 0;
}

extern "C" int cmd_si(char *args)
{
    if(npc_state==NPC_STATE::END)
    {
        printf("The program has finished\n");
        return 0;
    }

    int step_num = 1;
    if(args)
    {
        sscanf(args, "%d", &step_num);
    }
    try
    {
        for (int i = 0; i < step_num && npc_state!=NPC_STATE::END; i++)
        {
            top->clk = 0;
            top->eval();
            tfp->dump(sim_time++);
            top->clk = 1;
            top->eval();
            tfp->dump(sim_time++);

             // 断点检查
            if (monitor_pc(top->pc))
            {
                return 0;
            }
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error in cycle " << sim_time << ": " << e.what() << std::endl;
        npc_state = NPC_STATE::HALT;
        return 1;
    }
    return 0;
    }


static char *rl_gets()
{
    static char *line_read = nullptr;

    if(line_read){
        free(line_read);
        line_read = nullptr;
    }
    // readline 会动态分配一块内存，用于存储用户输入的字符串(整行)（如果前别有空格也写入）
    line_read = readline("(npc) ");

    // 确保 line_read 是一个有效的指针（非 NULL），并且用户输入的字符串不为空（至少有一个字符）。
    if(line_read && *line_read){
        add_history(line_read);
    }

    return line_read;
}

static int cmd_help(char *args);


static int cmd_info(char *args)
{

    for (int i = 0; i < 32; i++)
    {
        printf("x[%d] = 0x%08x\n", i, top->rootp->ysyx_25040109_top__DOT__regfile__DOT__rf[i]);
    }

    printf("pc = 0x%08x\n",  top->pc);

    return 0;
}

extern int printf_finish(uint32_t inst);
static int cmd_c(char *args)
{


        if(npc_state==NPC_STATE::END)
        {
            printf("The program had run finish \n");
            return 0;
        }
        while (!Verilated::gotFinish() && npc_state != NPC_STATE::END)
        {


          
            top->clk = 0;
            top->eval();
            tfp->dump(sim_time++);

  

            top->clk = 1;
            top->eval();
            tfp->dump(sim_time++);

            if (monitor_pc(top->pc))
                return 0;
        }

    return 0;
}




static int cmd_q(char *args)
{
    npc_state = NPC_STATE::QUIT;
    return -1;
}
    


static int cmd_x(char *args)
{

    int times =0;
    sscanf(args, "%d", &times);  
    strtok(args," ");
  
    char *temp = strtok(NULL, " ");
    uint32_t addr=strtol(temp,NULL,0);



    for (int i = 0; i < times;i++)
    {
        try
        {
            uint32_t data = pmem.pmem_read(addr,4);
            printf("addr:0x%08x  data: 0x%08x \n", addr, data);
        }
        catch (const exception &e)
        {
            cerr << "Cycle" << ":" << e.what() << endl;
            return 1;
        }
        
        addr += 4;
    }

        return 0;
}


static int cmd_p(char *args)
{
    
    bool success = false;
    word_t result = 0;
    result=expr(args, &success);
    cout << result << endl;
    return 0;
}

int count_watchpoint = 0;
static int cmd_w(char *args)
{
    WP *wp;
    wp = new_wp(args);
    printf("watchpoint NO:%-4d type:%-6c set success\n", wp->NO, wp->type);
    return 0;
}

static int cmd_d(char *args)
{
    int i = 0;
    int NO = atoi(args);
    for (i = 0; i < NR_WP;i++)
    {
        if(NO==wp_pool[i].NO)
        {
            break;
        }
    }

    WP *wp = &wp_pool[i];
    free_wp(wp);
    printf("delete watchpoint success\n");
    count_watchpoint--;
    return 0;
}

static struct
{
    const char *name;
    const char *description;
    int (*handler)(char *);
} cmd_table[] = {
    {"help", "Display information about all supported commands", cmd_help},
    {"info", "Display all the reg", cmd_info},
    {"c", "Continue the execution of the program", cmd_c},
    {"si", "Directly execute n times,(npc:si n)", cmd_si},
    {"q", "Exit NEMU", cmd_q},
    {"x", "scan the memory n times (x n addr)", cmd_x},
    {"p", "Get  the value of the  expresson (p expr) ", cmd_p},
    {"w", "Set the watchpoint", cmd_w},
    {"d", "Delete the watchpoint", cmd_d},
};

#define NR_CMD (int)(sizeof(cmd_table) / sizeof(cmd_table[0]))

static int cmd_help(char *args)
{
    char *arg = strtok(nullptr, " ");
    int i;

    if (arg == nullptr)
    {
        for (i = 0; i < NR_CMD; i++)
        {
            printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        }
    }
    else
    {
        for (i = 0; i < NR_CMD; i++)
        {
            if (strcmp(arg, cmd_table[i].name) == 0)
            {
                printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
                return 0;
            }
        }

        printf("Unkonw command '%s'\n", arg);
    }

    return 0;
}

void sdb_mainloop()
{
    for (char *str;(str=rl_gets())!=nullptr;)
    {
        char *str_end = str + strlen(str);
        char *cmd = strtok(str, " ");

        if(cmd==NULL){continue;}

        char *args = cmd + strlen(cmd) + 1;
        if(args >= str_end){
            args = NULL;
        }
    

    int i;
    for (i = 0; i < NR_CMD;i++)
    {
        if (strcmp(cmd,cmd_table[i].name) == 0)
        {
            if(cmd_table[i].handler(args) < 0){
                return;
            }
            break;
        }
    }

    if(i==NR_CMD){
        printf("Unknown comand '%s'\n", cmd);
    }
}
}