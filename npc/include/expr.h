#ifndef __EXPR_H__
#define __EXPR_H__

#include<common.h>

extern word_t expr(char *e, bool *success);
void cleanup_regex();

#endif