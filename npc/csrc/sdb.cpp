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
    // readline 会动态分配一块内存，用于存储用户输入的字符串
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

};

static int cmd_help(char *args){
    char *arg = strtok(NULL, " ");
    int i;

    if (arg==NULL){
        for(u=0)
    }
}
