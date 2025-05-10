#include <am.h>
#include <nemu.h>
#include<stdio.h>
// 注释：NEMU 的 RTC 寄存器由模拟器自动维护，无需初始化
void __am_timer_init() {
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  
  uint32_t high = inl(RTC_ADDR + 4);
  uint32_t low = inl(RTC_ADDR);
  // 低地址存储的是低 32 位，高地址存储的是高 32 位，这是小端内存布局

  printf("RTC_ADDR = 0x%lx, high = 0x%x, low = 0x%x\n", RTC_ADDR, high, low);
  uptime->us = ((uint64_t)high << 32) | low;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
