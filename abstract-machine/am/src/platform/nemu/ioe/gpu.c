#include <am.h>
#include <nemu.h>
#include<klib.h>




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

  //printf("[AM DEBUG] req data: x=%d, y=%d, w=%d, h=%d, pixels=%p, sync=%d\n",ctl->x, ctl->y, ctl->w, ctl->h, ctl->pixels, ctl->sync);

  // 将这个【持久有效】的静态变量的地址发给 NEMU。
  outl(VGACTL_ADDR  + 8, (uintptr_t)&static_ctl);
  }

  void __am_gpu_tileblit(AM_GPU_TILEBLIT_T *ctl) {
    // 同样使用静态变量确保数据持久性
    static AM_GPU_TILEBLIT_T static_ctl;
    static_ctl = *ctl;
    outl(VGACTL_ADDR + 12, (uintptr_t)&static_ctl);
  }

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
