#include<device/map.h>
#include<utils.h>


static uint64_t clint_mtime = 0;
static uint64_t clint_mtimecmp = -1;

static uint8_t *clint_port_base = NULL;

void clint_update_mtime() { clint_mtime++; }

static void clint_io_handler(uint32_t offset,int len,bool is_write){
    //逻辑在mmio里
}


void init_timer(){
    uint8_t *space = new_space(0x4008);

    add_mmio_map("timer", CONFIG_RTC_MMIO, space, 0x1000, clint_io_handler);
}



uint64_t clint_get_mtime(){
    return clint_mtime;
}