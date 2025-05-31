#include "ram.h"

uint8_t *guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
paddr_t gost_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }
