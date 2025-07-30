#include<device/map.h>
#include<utils.h>



static uint64_t clint_mtime = 0;
static uint64_t clint_mtimecmp = -1;

static uint8_t *clint_port_base = NULL;

void clint_update_and_check_interrupt(){
    clint_mtime++;
}


static void clint_io_handler(uint32_t offset,int len,bool is_write){
    //逻辑在mmio里
}


void init_timer(){
    uint8_t *space = new_space(0x4008);
    add_mmio_map("timer", CONFIG_RTC_MMIO, 0x4008, clint_io_handler);

}

/*void clint_update_ctimecmp(uint64_t new_mtimecmp){
    clint_mtimecmp = new_mtimecmp;
}*/

uint64_t clint_get_mtime(){
    return clint_mtime;
}