#include "ram.h"
#include <stdexcept>

uint8_t *guest_to_host(paddr_t paddr)
{
    return pmem.guest_to_host(paddr);
}

paddr_t gost_to_guest(uint8_t *haddr)
{
    return pmem.gost_to_guest(haddr);
}