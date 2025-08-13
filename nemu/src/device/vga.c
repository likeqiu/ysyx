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

#include <common.h>
#include <device/map.h>



#define SCREEN_W (MUXDEF(CONFIG_VGA_SIZE_800x600, 800, 400))
#define SCREEN_H (MUXDEF(CONFIG_VGA_SIZE_800x600, 600, 300))

static uint32_t screen_width() {
  return MUXDEF(CONFIG_TARGET_AM, io_read(AM_GPU_CONFIG).width, SCREEN_W);
}

static uint32_t screen_height() {
  return MUXDEF(CONFIG_TARGET_AM, io_read(AM_GPU_CONFIG).height, SCREEN_H);
}

static uint32_t screen_size() {
  return screen_width() * screen_height() * sizeof(uint32_t);
}

static void *vmem = NULL;
static uint32_t *vgactl_port_base = NULL;

#ifdef CONFIG_VGA_SHOW_SCREEN
#ifndef CONFIG_TARGET_AM
#include <SDL2/SDL.h>

static SDL_Renderer *renderer = NULL;
static SDL_Texture *texture = NULL;

static void init_screen() {
  SDL_Window *window = NULL;
  char title[128];
  sprintf(title, "%s-NEMU", str(__GUEST_ISA__));
  SDL_Init(SDL_INIT_VIDEO);
  SDL_CreateWindowAndRenderer(
      SCREEN_W * (MUXDEF(CONFIG_VGA_SIZE_400x300, 2, 1)),
      SCREEN_H * (MUXDEF(CONFIG_VGA_SIZE_400x300, 2, 1)),
      0, &window, &renderer);
  SDL_SetWindowTitle(window, title);
  texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888,
      SDL_TEXTUREACCESS_STATIC, SCREEN_W, SCREEN_H);
  SDL_RenderPresent(renderer);
}

static inline void update_screen() {
  SDL_UpdateTexture(texture, NULL, vmem, SCREEN_W * sizeof(uint32_t));
  SDL_RenderClear(renderer);
  SDL_RenderCopy(renderer, texture, NULL, NULL);
  SDL_RenderPresent(renderer);
}
#else
static void init_screen() {}

static inline void update_screen() {
  io_write(AM_GPU_FBDRAW, 0, 0, vmem, screen_width(), screen_height(), true);
}
#endif
#endif

void vga_update_screen() {
  // TODO: call `update_screen()` when the sync register is non-zero,
  // then zero out the sync register

  if (vgactl_port_base[1]) {
    update_screen();
    vgactl_port_base[1] = 0;
  }
}

typedef struct {
  int x, y;
  void *pixels;
  int w, h;
  bool sync;
} vga_blit_req_t;

word_t paddr_read(paddr_t addr, int len);
uint8_t *guest_to_host(paddr_t paddr);

static uint32_t *dma_req_paddr_ptr = NULL;
static void vga_blit_handler(uint32_t offset, int len, bool is_write) {
  if (!is_write)
    return;

  // 1. 获取 Guest 端控制块的【物理地址】
  uint32_t ctl_paddr = *dma_req_paddr_ptr;

  // 2. 【关键】按照 32 位 Guest 的内存布局，手动解析数据。
  //    我们不再进行危险的类型转换，而是像硬件一样，从确切的偏移量读取数据。
  //    paddr_read 可以安全地从 Guest 的物理内存读取指定长度的数据。
  int x = paddr_read(ctl_paddr + 0, 4); // x 成员在偏移量 0 处，占 4 字节
  int y = paddr_read(ctl_paddr + 4, 4); // y 成员在偏移量 4 处，占 4 字节
  uint32_t pixels = paddr_read(
      ctl_paddr + 8, 4); // pixels 指针在偏移量 8 处，在 32位 Guest 中占 4 字节
  int w = paddr_read(ctl_paddr + 12, 4); // w 成员在偏移量 12 处，占 4 字节
  int h = paddr_read(ctl_paddr + 16, 4); // h 成员在偏移量 16 处，占 4 字节
  bool sync =
      paddr_read(ctl_paddr + 20, 1); // sync 成员在偏移量 20 处，占 1 字节

  // 为了最终验证，我们打印手动解析出的数据
  printf(
      "[NEMU DEBUG] Parsed req: x=%d, y=%d, w=%d, h=%d, pixels=0x%x, sync=%d\n",
      x, y, w, h, pixels, sync);

  // 3. 使用我们手动解析出的、100% 正确的数据执行后续逻辑
  if (pixels != 0 && w != 0 && h != 0) {
    uint32_t screen_w = screen_width();
    uint32_t *fb = (uint32_t *)(uintptr_t)vmem;

    // 将 Guest 的 pixels 地址（现在是正确的 uint32_t）转换为 Host 指针
    uint32_t *pixels_haddr = (uint32_t *)guest_to_host(pixels);

    for (int j = 0; j < h; j++) {
      uint32_t *dest = &fb[(y + j) * screen_w + x];
      uint32_t *src = &pixels_haddr[j * w];
      memcpy(dest, src, w * sizeof(uint32_t));
    }
  }

  if (sync) {
    vgactl_port_base[1] = 1;
  }
}
void init_vga() {
  vgactl_port_base = (uint32_t *)new_space(8);
  vgactl_port_base[0] = (screen_width() << 16) | screen_height();

#ifdef CONFIG_HAS_PORT_IO
  add_pio_map ("vgactl", CONFIG_VGA_CTL_PORT, vgactl_port_base, 8, NULL);
#else
  add_mmio_map("vgactl", CONFIG_VGA_CTL_MMIO, vgactl_port_base, 8,
               NULL);
#endif

  dma_req_paddr_ptr = (uint32_t *)new_space(4);
  add_mmio_map("vga_blit", CONFIG_VGA_CTL_MMIO + 8, dma_req_paddr_ptr, 4,vga_blit_handler);

  vmem = new_space(screen_size());
  add_mmio_map("vmem", CONFIG_FB_ADDR, vmem, screen_size(), NULL);
  IFDEF(CONFIG_VGA_SHOW_SCREEN, init_screen());
  IFDEF(CONFIG_VGA_SHOW_SCREEN, memset(vmem, 0, screen_size()));
}
