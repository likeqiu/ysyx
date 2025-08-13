#include <am.h>
#include <nemu.h>
#include<klib.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
  /*
   int i;
   uint32_t screen_info = inl(VGACTL_ADDR);
   int w = screen_info >> 16;
   int h = screen_info & 0xFFFF;
   uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
   for (i = 0; i < w * h; i ++) fb[i] = i;
   outl(SYNC_ADDR, 1);*/
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
  
  uint32_t screen_info = inl(VGACTL_ADDR);
  uint32_t width = screen_info >> 16;
  uint32_t height = screen_info & 0xFFFF;
  *cfg = (AM_GPU_CONFIG_T){.present = true,
                           .has_accel = false,
                           .width = width,
                           .height = height,
                           .vmemsz = width * height * sizeof(uint32_t)};
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {

  static AM_GPU_FBDRAW_T static_ctl;

  // 将栈上传来的临时 ctl 的内容，完整地拷贝到静态变量中。
  static_ctl = *ctl;

  // 将这个【持久有效】的静态变量的地址发给 NEMU。
  outl(VGACTL_ADDR  + 8, (uintptr_t)&static_ctl);
  }
  



void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
