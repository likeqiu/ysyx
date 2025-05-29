#include"ram.h"

static paddr_t mtrace_start = 0x80000000;
static paddr_t mtrace_end = 0xfffffff;

void mtrace_record(char type,paddr_t addr,int len,word_t data)
{
    
    printf("mtrace:  "%s"  0x%08x\n",str,data);
}
