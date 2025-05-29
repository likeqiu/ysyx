#ifndef _MTRACE_H_
#define _MTRACE_H_
#include"common.h"
extern "C" void mtrace_record(char type, paddr_t addr, int len, word_t data);
extern "C" void mtrace_set_range(paddr_t start, paddr_t end);

#endif