#include<device/map.h>
#include<utils.h>

void add_mmio_map(const char *name, paddr_t addr, void *space, uint32_t len,
                  io_callback_t callback);
static uint64_t clint_mtime = 0;
static uint64_t clint_mtimecmp = -1;

static uint8_t *clint_port_base = NULL;

void clint_update_mtime() { clint_mtime++; }

static void clint_io_handler(uint32_t offset,int len,bool is_write){
    //逻辑在mmio里
}


void init_timer(){
    uint8_t *space = new_space(0x4008);

    add_mmio_map("timer", CONFIG_RTC_MMIO, space, 0x4008, clint_io_handler);
    
}



uint64_t clint_get_mtime(){
    return clint_mtime;
}