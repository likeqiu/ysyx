#include <common.h>


#define MAX_BUFFER 16;

    typedef struct 
{
    vaddr_t pc;
    uint32_t inst;
    char disasm_str[64];
} IRingBufEntry;
