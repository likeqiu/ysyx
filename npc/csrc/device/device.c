#include<common.h>
#include<utils.h>

#define TIMER_HZ 60

void init_map();
void init_serial();
void init_timer();
void init_vga();

void vga_update_screen();

void device_update() {

  static uint64_t last = 0; // 只初始化一次
  uint64_t now = get_time();
  if (now - last < 1000000 / TIMER_HZ) {
    return; // 限制更新频率
  }
  last = now;

  IFDEF(CONFIG_HAS_VGA, vga_update_screen());
}

void init_device(){
    init_map();
    IFDEF(CONFIG_HAS_SERIAL, init_serial());
    IFDEF(CONFIG_HAS_TIMER, init_timer());
    IFDEF(CONFIG_HAS_VGA, init_vga());
}