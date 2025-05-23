#include<readline/readline.h>
#include<readline/history.h>
#include"ram.h"
#include <Vysyx_25040109_top___024root.h>

using namespace std;



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

    return 0;
}

static int cmd_c(char *args)
{



        if(npc_state==NPC_STATE::END)
        {
            printf("The program had run finish \n");
            return 0;
        }
        while (!Verilated::gotFinish())
        {
            

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

    return 0;
}


static int cmd_si(char *args)
{
    if (npc_state == NPC_STATE::END)
    {
        printf("The program had run finish \n");
        return 0;
    }
    int ext_num = 0;
    sscanf(args, "%d", &ext_num);
    for (int i = 0; i < ext_num;i++)
    {

        top->clk = 0;
        top->eval();
        tfp->dump(sim_time++);

        try{
            top->inst = imem.pmem_read(top->pc);
        }catch(const exception &e)
        {
            cerr << "Cycle" << ":" << e.what() << endl;
            break;
        }

        top->clk = 1;
        top->eval();
        tfp->dump(sim_time++);
    }

    return 0;
}

static int cmd_q(char *args)
{
    return -1;
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