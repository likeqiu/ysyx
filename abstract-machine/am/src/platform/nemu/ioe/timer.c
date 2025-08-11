#include <am.h>
#include <nemu.h>
//#include<klib.h>

void __am_timer_init() {}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {

  // uptime->us = *(volatile uint64_t *)RTC_ADDR;64位时读取
 /* uint32_t high = inl(RTC_ADDR + 4);
  uint32_t low = inl(RTC_ADDR);
  // 低地址存储的是低 32 位，高地址存储的是高 32 位，这是小端内存布局

  uptime->us = ((uint64_t)high << 32) | low;*/
 // printf("22222\n");

  uint32_t hi, lo;
  do {
    lo = inl(RTC_ADDR);
    hi = inl(RTC_ADDR + 4);
    

  } while (inl(RTC_ADDR + 4) != hi);

  uptime->us = ((uint64_t)hi << 32) | lo;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour = 0;
  rtc->day = 0;
  rtc->month = 0;
  rtc->year = 1900;
}
