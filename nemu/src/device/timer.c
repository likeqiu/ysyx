      /***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <device/map.h>
#include <device/alarm.h>
#include <utils.h>

// 实时时钟（Real-Time Clock, RTC）端口的基地址指针
static uint32_t *rtc_port_base = NULL;

// 处理RTC设备的输入 / 输出操作
//    - len: 读写数据的长度（此实现中未使用）。
static void rtc_io_handler(uint32_t offset, int len, bool is_write) {

  //if (is_write)
   // return;

  //printf("111\n");
  
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

#ifndef CONFIG_TARGET_AM
static void timer_intr() {
  if (nemu_state.state == NEMU_RUNNING) {
    extern void dev_raise_intr();
    // 一个函数，用于触发设备中断信号。
    dev_raise_intr();
  }
}
#endif

void init_timer() {
  rtc_port_base = (uint32_t *)new_space(8);
  // 为RTC寄存器分配8字节内存，并赋值给rtc_port_base
#ifdef CONFIG_HAS_PORT_IO
  add_pio_map ("rtc", CONFIG_RTC_PORT, rtc_port_base, 8, rtc_io_handler);
  // 将RTC内存映射到端口I/O地址。
#else
  add_mmio_map("rtc", CONFIG_RTC_MMIO, rtc_port_base, 8, rtc_io_handler);
  // 将RTC内存映射到内存映射I/O地址
#endif
  // 描述: 将timer_intr函数注册为闹钟处理函数。
  // 用途: 启用周期性定时器中断。
  IFNDEF(CONFIG_TARGET_AM, add_alarm_handle(timer_intr));
}
