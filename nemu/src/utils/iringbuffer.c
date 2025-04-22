#include <common.h>


#define IRINGBUF_SIZE 16

    typedef struct 
{
    vaddr_t pc;
    uint32_t inst;
    char disasm_str[64];
} IRingBufEntry;

static IRingBufEntry iringbuf[IRINGBUF_SIZE];
static int iringbuf_index = 0;
static bool iringbuf_full = false;

void init_iringbuffer()
{
    iringbuf_index = 0;
    iringbuf_full = false;
    for (int i = 0;i < IRINGBUF_SIZE ; i++)
    {
        iringbuf[i].pc = 0;
        iringbuf[i].inst = 0;
        iringbuf[i].disasm_str[0] = '\0';
    }
}
