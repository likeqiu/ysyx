#include<readline/readline.h>
#include<readline/history.h>
#include <cstdlib>
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


static struct {
    const char *name;
    const char *description;
    int (*handle)(char *);
} cmd_table[] = {
    {"help", "Display information about all supported commands", cmd_help},
    {"info", "Display all the reg", cmd_info},
    {"c", "Continue the execution of the program", cmd_c},
};

#define NR_CMD (int)(sizeof(cmd_table) / sizeof(cmd_table[0]))

static int cmd_help(char *args){
    char *arg = strtok(nullptr, " ");
    int i;

    if (arg == nullptr)
    {
        for ( i = 0; i < NR_CMD;i++)
        {
            printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        }
    }
    else
    {
        for (i = 0; i < NR_CMD;i++)
        {
            if(strcmp(arg,cmd_table[i].name)==0)
            {
                printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
                return 0;
            }
        }

        printf("Unkonw command '%s'\n", arg);
    }

    return 0;
}

extern void printf_register();
static int cmd_info(char *args)
{
    printf_register();
    return 0;
}

static int cmd_c(char *args)
{
   
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
    }

    int i;
    for (i = 0; i < NR_CMD;i++)
    {
        if (strcmp(cmd, cmd_table[i].name) == 0)
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