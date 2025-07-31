#include <am.h>
#include <npc.h>
#include<klib.h>


void __am_gpu_init() {
  /*
   int i;
   uint32_t screen_info = inl(VGACTL_ADDR);
   int w = screen_info >> 16;
   int h = screen_info & 0xFFFF;
   uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
   for (i = 0; i < w * h; i ++) fb[i] = i;
   outl(SYNC_ADDR, 1);
   */
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

  if (ctl->pixels != NULL && ctl->w != 0 && ctl->h != 0) {
    uint32_t screen_width = inl(VGACTL_ADDR) >> 16;
    uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
    uint32_t *pixels = ctl->pixels;
    int x = ctl->x;
    int y = ctl->y;
    int w = ctl->w;
    int h = ctl->h;

    // 逐行复制像素
    // 这一部分可以替换成memcpy
    for (int j = 0; j < h; j++) {
      uint32_t *dest = &fb[(y + j) * screen_width + x];
      uint32_t *src = &pixels[j * w];
      memcpy(dest, src, w * sizeof(uint32_t));
    }
  }

  if (ctl->sync) {
    outl(SYNC_ADDR, 1);
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) { status->ready = true; }
