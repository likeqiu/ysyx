#include "ram.h"
#include <stdexcept>

uint8_t *guest_to_host(paddr_t paddr)
{
    if (paddr < PMEM_LEFT || paddr > PMEM_RIGHT)
    {
        throw std::out_of_range("Address out of range: " + std::to_string(paddr));
    }
    return pmem.pmem.data() + (paddr - CONFIG_MBASE);
}

paddr_t gost_to_guest(uint8_t *haddr)
{
    ptrdiff_t offset = haddr - pmem.pmem.data();
    if (offset < 0 || offset >= pmem.get_size())
    {
        throw std::out_of_range("Host address out of range");
    }
    return static_cast<paddr_t>(offset + CONFIG_MBASE);
}