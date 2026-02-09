#ifndef __MEMORY_PADDR_H__
#define __MEMORY_PADDR_H__

#include <common.h>
#include<mtrace.h>

#define PMEM_LEFT ((paddr_t)CONFIG_MBASE)
#define PMEM_RIGHT ((paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1)
#define RESET_VECTOR (PMEM_LEFT + CONFIG_PC_RESET_OFFSET)

#ifdef SOC_TOP
#define MROM_BASE ((paddr_t)0x20000000)
#define MROM_SIZE ((paddr_t)0x1000)
#define SRAM_BASE ((paddr_t)0x0f000000)
#define SRAM_SIZE ((paddr_t)0x2000)
#define MROM_LEFT MROM_BASE
#define MROM_RIGHT (MROM_BASE + MROM_SIZE - 1)
#define SRAM_LEFT SRAM_BASE
#define SRAM_RIGHT (SRAM_BASE + SRAM_SIZE - 1)
#endif


uint8_t *guest_to_host(paddr_t paddr);
paddr_t host_to_guest(uint8_t *haddr);

static inline bool in_pmem_read(paddr_t addr)
{
#ifdef SOC_TOP
    return (addr - MROM_BASE < MROM_SIZE) || (addr - SRAM_BASE < SRAM_SIZE);
#else
    return addr - CONFIG_MBASE < CONFIG_MSIZE;
#endif
}

static inline bool in_pmem_write(paddr_t addr)
{
#ifdef SOC_TOP
    return addr - SRAM_BASE < SRAM_SIZE;
#else
    return addr - CONFIG_MBASE < CONFIG_MSIZE;
#endif
}

static inline bool in_pmem(paddr_t addr)
{
    return in_pmem_read(addr);
}

word_t paddr_read(paddr_t addr, int len);
void paddr_write(paddr_t addr, int len, word_t data);
bool paddr_is_valid(paddr_t addr);

#endif
