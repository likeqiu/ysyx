#include <am.h>
#include<npc.h>

static uint64_t boot_time_us = 0;

static inline uint64_t mtime_to_us(uint64_t ticks) {
  return ticks * 1000000ULL / CLINT_FREQ;
}

static inline uint64_t read_mtime() {
  uint32_t hi1, lo, hi2;
  do {
    hi1 = inl(RTC_ADDR + 4);
    lo = inl(RTC_ADDR);
    hi2 = inl(RTC_ADDR + 4);

  } while (hi1 != hi2);

  return ((uint64_t)hi2 << 32) | lo;
}


void __am_timer_init() { boot_time_us = mtime_to_us(read_mtime()); }




void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {

  uint64_t now_us = mtime_to_us(read_mtime());
  uptime->us = now_us - boot_time_us;
}


void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
