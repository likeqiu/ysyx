
#include <memory/host.h>
#include <memory/paddr.h>
#include <device/mmio.h>
#include <isa.h>



#if defined(CONFIG_PMEM_MALLOC)
    static uint8_t *pmem = NULL;
#else // CONFIG_PMEM_GARRAY
    static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
#endif

#ifdef SOC_TOP
static uint8_t sram[SRAM_SIZE] PG_ALIGN = {};
#endif

uint8_t *guest_to_host(paddr_t paddr) {
#ifdef SOC_TOP
    if (paddr - MROM_BASE < MROM_SIZE) {
        return pmem + paddr - MROM_BASE;
    }
    if (paddr - SRAM_BASE < SRAM_SIZE) {
        return sram + paddr - SRAM_BASE;
    }
#endif
    return pmem + paddr - CONFIG_MBASE;
}

paddr_t host_to_guest(uint8_t *haddr) {
#ifdef SOC_TOP
    if (haddr >= pmem && haddr < pmem + MROM_SIZE) {
        return MROM_BASE + (paddr_t)(haddr - pmem);
    }
    if (haddr >= sram && haddr < sram + SRAM_SIZE) {
        return SRAM_BASE + (paddr_t)(haddr - sram);
    }
#endif
    return haddr - pmem + CONFIG_MBASE;
}

static word_t pmem_read(paddr_t addr, int len)
{
    word_t ret = host_read(guest_to_host(addr), len);
    return ret;
}

static void pmem_write(paddr_t addr, int len, word_t data)
{
    host_write(guest_to_host(addr), len, data);
}

static void out_of_bound(paddr_t addr)
{
    panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
          addr, PMEM_LEFT, PMEM_RIGHT, cpu.pc);
}

void init_mem()
{

#if defined(CONFIG_PMEM_MALLOC)
    pmem = malloc(CONFIG_MSIZE);
    assert(pmem);
#endif
#ifdef SOC_TOP
    IFDEF(CONFIG_MEM_RANDOM, {
        memset(pmem, rand(), MROM_SIZE);
        memset(sram, rand(), SRAM_SIZE);
    });
    Log("mrom area [" FMT_PADDR ", " FMT_PADDR "]", MROM_LEFT, MROM_RIGHT);
    Log("sram area [" FMT_PADDR ", " FMT_PADDR "]", SRAM_LEFT, SRAM_RIGHT);
#else
    IFDEF(CONFIG_MEM_RANDOM, memset(pmem, rand(), CONFIG_MSIZE));
    Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]", PMEM_LEFT,
        PMEM_RIGHT);
#endif
   // printf("11111111111\n");
}

word_t paddr_read(paddr_t addr, int len)
{
    word_t ret = 0;
    if (likely(in_pmem_read(addr)))
    {
        ret = pmem_read(addr, len);
        return ret;
    }

   // printf("R:0x%08x\n", addr);
    // IFDEF(CONFIG_ITRACE, iringbuf_dump(addr));
    IFDEF(CONFIG_DEVICE, ret = mmio_read(addr, len); return ret);

    
    // 对于超出范围的地址，返回0而不是panic
    // 这允许程序在遇到无效地址访问时继续执行
    return 0;
}

void paddr_write(paddr_t addr, int len, word_t data)
{

  
  if (likely(in_pmem_write(addr))) {
    pmem_write(addr, len, data);
    return;
  }

#ifdef SOC_TOP
  if (in_pmem_read(addr)) {
    
    return;
  }
#endif

  //printf("W:0x%08x\n",addr);
  IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return);
  // printf("3334\n");
  // 对于超出范围的地址，忽略写操作而不是panic
  // 这允许程序在遇到无效地址写操作时继续执行
  return;
}


bool paddr_is_valid(paddr_t addr) {

  if (in_pmem_read(addr))
    return true;
  
#ifdef CONFIG_DEVICE
    return mmio_has_map(addr);
#else
    return false;
#endif  
}
