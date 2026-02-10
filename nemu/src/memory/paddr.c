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

#include <memory/host.h>
#include <memory/paddr.h>
#include <device/mmio.h>
#include <mtrace.h>
#include <isa.h>

#if   defined(CONFIG_PMEM_MALLOC)
static uint8_t *pmem = NULL;
#else // CONFIG_PMEM_GARRAY
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
#endif

#ifdef CONFIG_YSYXSOC
static uint8_t mrom[MROM_SIZE] PG_ALIGN = {};
static uint8_t sram[SRAM_SIZE] PG_ALIGN = {};
#endif

uint8_t* guest_to_host(paddr_t paddr) {
#ifdef CONFIG_YSYXSOC
  if (paddr - MROM_BASE < MROM_SIZE) {
    return mrom + paddr - MROM_BASE;
  }
  if (paddr - SRAM_BASE < SRAM_SIZE) {
    return sram + paddr - SRAM_BASE;
  }
#endif
  return pmem + paddr - CONFIG_MBASE;
}

paddr_t host_to_guest(uint8_t *haddr) {
#ifdef CONFIG_YSYXSOC
  uintptr_t host = (uintptr_t)haddr;
  if (host >= (uintptr_t)mrom && host < (uintptr_t)(mrom + MROM_SIZE)) {
    return MROM_BASE + (paddr_t)(host - (uintptr_t)mrom);
  }
  if (host >= (uintptr_t)sram && host < (uintptr_t)(sram + SRAM_SIZE)) {
    return SRAM_BASE + (paddr_t)(host - (uintptr_t)sram);
  }
#endif
  return haddr - pmem + CONFIG_MBASE;
}

static word_t pmem_read(paddr_t addr, int len) {
  word_t ret = host_read(guest_to_host(addr), len);
  return ret;
}

static void pmem_write(paddr_t addr, int len, word_t data) {
  host_write(guest_to_host(addr), len, data);
}

static void out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, PMEM_LEFT, PMEM_RIGHT, cpu.pc);
}

void init_mem() {
#if   defined(CONFIG_PMEM_MALLOC)
  pmem = malloc(CONFIG_MSIZE);
  assert(pmem);
#endif
#ifdef CONFIG_YSYXSOC
  IFDEF(CONFIG_MEM_RANDOM, {
    memset(mrom, rand(), MROM_SIZE);
    memset(sram, rand(), SRAM_SIZE);
  });
  Log("mrom area [" FMT_PADDR ", " FMT_PADDR "]", MROM_LEFT, MROM_RIGHT);
  Log("sram area [" FMT_PADDR ", " FMT_PADDR "]", SRAM_LEFT, SRAM_RIGHT);
#else
  IFDEF(CONFIG_MEM_RANDOM, memset(pmem, rand(), CONFIG_MSIZE));
  Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]", PMEM_LEFT, PMEM_RIGHT);
#endif
}


word_t paddr_read(paddr_t addr, int len)
{
  word_t ret = 0;
  if (likely(in_pmem_read(addr)))
  {
    ret = pmem_read(addr, len);
    mtrace_record('R', addr, len, ret);
    return ret;
  }

  //IFDEF(CONFIG_ITRACE, iringbuf_dump(addr));
  IFDEF(CONFIG_DEVICE, ret = mmio_read(addr, len); mtrace_record('R', addr, len, ret); return ret);
  
  out_of_bound(addr);
  return 0;
}

void paddr_write(paddr_t addr, int len, word_t data) {
  
  if (likely(in_pmem_write(addr))) {
     pmem_write(addr, len, data);
     mtrace_record('W', addr, len, data);
     return; }

#ifdef CONFIG_YSYXSOC
  if (in_pmem_read(addr)) {
    Assert(false, "write to mrom at " FMT_PADDR " len=%d data=" FMT_WORD " pc=" FMT_WORD,
           addr, len, data, cpu.pc);
    return;
  }
#endif

 // printf("addr: 0x%08x\n",addr);
  IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); mtrace_record('W', addr, len, data); return);
  out_of_bound(addr);
}
