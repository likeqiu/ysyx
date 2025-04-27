#ifndef __FTRACE_H__
#define __FTRACE_H__

#include<common.h>
void init_ftrace(const char *elf_file);
void ftrace_call(uint32_t pc, uint32_t target_addr);
void ftrace_ret(uint32_t pc);
const char *addr_to_func(uint32_t addr);
bool is_stack_top_ret_addr(uint32_t addr);


#endif