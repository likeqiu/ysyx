/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#ifndef __CPU_CPU_H__
#define __CPU_CPU_H__

#include <common.h>




void cpu_exec(uint64_t n);

void set_nemu_state(int state, vaddr_t pc, int halt_ret);
void invalid_inst(vaddr_t thispc);

#define NEMUTRAP(thispc, code) set_nemu_state(NEMU_END, thispc, code)
#define INV(thispc) invalid_inst(thispc)

#define NR_WP 32
typedef struct watchpoint
{
    int NO;
    struct watchpoint *next;
    char *str;
    word_t old_value;
} WP;
extern WP wp_pool[NR_WP];
extern WP *free_;
extern WP *head;

extern word_t expr(char *e, bool *success);

extern WP *new_wp(char *expr_str);
extern void free_wp(WP *wp);
extern void init_wp_pool();

#endif
