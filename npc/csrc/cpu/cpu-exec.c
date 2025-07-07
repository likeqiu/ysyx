#include <cpu/cpu.h>
#include<locale.h>


#define MAX_INST_TO_PRINT 100

CPU_state cpu = {};

uint64_t g_nr_guest_inst = 0;
//static uint64_t g_timer = 0;
static bool g_print_step = false;

vaddr_t get_cpu_pc(){
    return cpu.pc;
}


