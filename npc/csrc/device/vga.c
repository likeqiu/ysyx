
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
      SCREEN_H * (MUXDEF(CONFIG_VGA_SIZE_400x300, 2, 1)), 0, &window,
      &renderer);
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

void handle_fbdraw_dma();
void handle_tileblit_dma();

// 主设备更新函数，现在是所有逻辑的核心
void vga_update_screen() {
  // 1. 检查是否有 TILEBLIT 请求（检查信箱1）
  /*if (*tileblit_paddr_ptr != 0) {
    handle_tileblit_dma();
    *tileblit_paddr_ptr = 0; // 处理完后，清空信箱
  }

  // 2. 检查是否有 FBDRAW 请求（检查信箱2）
  if (*fbdraw_paddr_ptr != 0) {
    handle_fbdraw_dma();
    *fbdraw_paddr_ptr = 0; // 处理完后，清空信箱
  }
*/
  // 3. 检查是否有同步信号，并刷新屏幕
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
static uint32_t *fbdraw_paddr_ptr = NULL;
static uint32_t *tileblit_paddr_ptr = NULL;

// 【重要】我们将 handler 函数的声明从 static 去掉，因为要在 vga_update_screen
// 中调用


// FBDRAW 的处理逻辑
void handle_fbdraw_dma() {
  uint32_t ctl_paddr = *fbdraw_paddr_ptr;
  int x = paddr_read(ctl_paddr + 0, 4);
  int y = paddr_read(ctl_paddr + 4, 4);
  uint32_t pixels = paddr_read(ctl_paddr + 8, 4);
  int w = paddr_read(ctl_paddr + 12, 4);
  int h = paddr_read(ctl_paddr + 16, 4);
  bool sync = paddr_read(ctl_paddr + 20, 1);

  if (pixels != 0 && w != 0 && h != 0) {
    uint32_t screen_w = screen_width();
    uint32_t *fb = (uint32_t *)vmem;
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

// TILEBLIT 的处理逻辑
void handle_tileblit_dma() {
  printf("11111111\n");
  uint32_t ctl_paddr = *tileblit_paddr_ptr;
  int x0 = paddr_read(ctl_paddr + 0, 4);
  int y0 = paddr_read(ctl_paddr + 4, 4);
  uint32_t tiles_paddr = paddr_read(ctl_paddr + 8, 4);
  int w = paddr_read(ctl_paddr + 12, 4);
  int h = paddr_read(ctl_paddr + 16, 4);
  int tile_w = paddr_read(ctl_paddr + 20, 4);
  int tile_h = paddr_read(ctl_paddr + 24, 4);

  uint32_t *tiles = (uint32_t *)guest_to_host(tiles_paddr);
  uint32_t *fb = (uint32_t *)vmem;
  uint32_t screen_w = screen_width();

  for (int y = 0; y < h; y++) {
    for (int x = 0; x < w; x++) {
      int canvas_x = x * tile_w / w;
      int canvas_y = y * tile_h / h;
      fb[(y0 + y) * screen_w + (x0 + x)] = tiles[canvas_y * tile_w + canvas_x];
    }
  }
}
void init_vga() {
  vgactl_port_base = (uint32_t *)new_space(8);
  vgactl_port_base[0] = (screen_width() << 16) | screen_height();
  add_mmio_map("vgactl", CONFIG_VGA_CTL_MMIO, vgactl_port_base, 8, NULL);

  // 【重要】我们仍然需要注册 MMIO 区域，但回调函数设为 NULL
  // 这样，当 AM 写入时，数据能被正确存入 fbdraw_paddr_ptr 和 tileblit_paddr_ptr
  fbdraw_paddr_ptr = (uint32_t *)new_space(4);
  add_mmio_map("vga_blit", CONFIG_VGA_CTL_MMIO + 8, fbdraw_paddr_ptr, 4,handle_fbdraw_dma);

  tileblit_paddr_ptr = (uint32_t *)new_space(4);
  add_mmio_map("vga_tileblit", CONFIG_VGA_CTL_MMIO + 12, tileblit_paddr_ptr, 4,
               handle_tileblit_dma());

  vmem = new_space(screen_size());
  add_mmio_map("vmem", CONFIG_FB_ADDR, vmem, screen_size(), NULL);

  IFDEF(CONFIG_VGA_SHOW_SCREEN, init_screen());
  IFDEF(CONFIG_VGA_SHOW_SCREEN, memset(vmem, 0, screen_size()));
}
