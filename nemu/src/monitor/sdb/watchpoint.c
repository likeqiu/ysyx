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

#include "sdb.h"
#include<string.h>


#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
  char *str;
  word_t old_value;

  /* TODO: Add more members if necessary */

} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;


WP* new_wp(char *expr_str)
{
  if(free_==NULL){

    printf("no free watchpoints");
    assert(0);
  }

    WP *wp = free_;
    wp->str =strdup(expr_str);

    bool success;

    wp->old_value = expr(wp->str, &success);



    free_ = wp->next;

    wp->next = head;
    head = wp;


    return wp;
}
void free_wp(WP *wp)
{

  if(wp==NULL){
    return;
  }

    if(head==wp){
    head = head->next;
    }else {
      WP *prev = head;
      while(prev && prev->next != wp)
      {
        prev = prev->next;
      }

      if(prev){
      prev->next = wp->next;
      }
    }
    free(wp->str);
    wp->old_value = 0;
    wp->next = free_;
    free_ = wp;
    printf("Watchpoint %d deleted\n", wp->NO);

}
  

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}





/* TODO: Implement the functionality of watchpoint */

