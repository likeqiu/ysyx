
#include <device/alarm.h>
#include <device/map.h>
#include <utils.h>

// 实时时钟（Real-Time Clock, RTC）端口的基地址指针
static uint32_t *rtc_port_base = NULL;

// 处理RTC设备的输入 / 输出操作
//    - len: 读写数据的长度（此实现中未使用）。
static void rtc_io_handler(uint32_t offset, int len, bool is_write) {


  assert(offset == 0 || offset == 4);
  if (!is_write && offset == 4) {
    uint64_t us = get_time();
    rtc_port_base[0] = (uint32_t)us;
    // 将低32位存储到rtc_port_base[0]
    rtc_port_base[1] = us >> 32;
    // 将高32位存储到rtc_port_base[1]
  }
  // 行为: 当读取偏移量4时，调用get_time()获取当前时间，将64位微秒值拆分为
  //       两个32位寄存器（rtc_port_base[0] 和 rtc_port_base[1]）。
}



void init_timer() {
  rtc_port_base = (uint32_t *)new_space(8);
  // 为RTC寄存器分配8字节内存，并赋值给rtc_port_base
#ifdef CONFIG_HAS_PORT_IO
  add_pio_map("rtc", CONFIG_RTC_PORT, rtc_port_base, 8, rtc_io_handler);
  // 将RTC内存映射到端口I/O地址。
#else
  add_mmio_map("rtc", CONFIG_RTC_MMIO, rtc_port_base, 8, rtc_io_handler);
  // 将RTC内存映射到内存映射I/O地址
#endif

}
