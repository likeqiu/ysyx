#include "ram.h"

uint8_t *guest_to_host(paddr_t paddr) {
    if (!pmem.in_pmem(paddr) {
            throw std::out_of_range("Address out of range:" + std::to_string(paddr));
        })

        return pmem.data() + (paddr - CONFIG_MBASE);
}
paddr_t gost_to_guest(uint8_t *haddr) {
    // ptrdiff_t 是一种有符号整型，用于表示两个指针相减的结果。
    ptrdiff_t offset = haddr - pmem.data();
    if(offset < 0 || offset >= static_case<ptrdiff_t>(pmem.get_size())){
        throw std::out_of_range("Host address out of range");
    }

    return static_cast<paddr_t>(offset + CONFIG_MBASE);
}
