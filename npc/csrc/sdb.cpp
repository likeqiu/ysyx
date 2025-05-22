#include<readline/readline.h>
#include<readline/history.h>
#include <cstdlib>
#include <Vysyx_25040109_top.h>
#include <iostream>
using namespace std;





static char* rl_gets(){
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

extern "C" void print_registers();
static int cmd_info(char *args)
{
    // 1. 定义要设置的作用域的完整层次路径。
    //    这里假设你的 RegisterFile 模块实例在顶层模块 ysyx_25040109_top 中被命名为 rf_inst。
    //    如果 RegisterFile 模块本身就是顶层模块，那么路径就是 "ysyx_25040109_RegisterFile"。
    const char *scope_path = "ysyx_25040109_top.regfile"; // <-- 这里是关键！根据实际实例名修改

    // 2. 获取该作用域的句柄
    svScope current_scope = svGetScopeFromName(scope_path);

    // 3. 检查是否成功获取句柄
    if (current_scope == NULL)
    {
        cerr << "Error: Could not find Verilog scope for path: " << scope_path << endl;
        // 如果这里报错，说明你的 scope_path 可能不正确
        // 你可能需要通过仿真器查看 Verilog 模块的层次结构来确认正确的路径
        return;
    }

    // 4. 设置当前 DPI 作用域
    svSetScope(current_scope);

    // 5. 现在可以安全地调用 Verilog task 了
    cout << "C++: Calling Verilog task print_registers in scope: " << scope_path << endl;
    print_registers(); // 调用 Verilog 中导出的 task

    // 6. (可选) 如果你需要在同一个 C 函数中切换到其他 Verilog 作用域，
    //    或者在调用完后恢复到之前的 C 默认作用域，可以保存旧的作用域并恢复。
    //    svScope old_scope = svSetScope(current_scope); // 传递新 scope，并返回旧 scope
    //    // ... 其他操作 ...
    //    svSetScope(old_scope); // 恢复旧 scope
    return 0;
}

static int cmd_c(char *args)
{
   
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