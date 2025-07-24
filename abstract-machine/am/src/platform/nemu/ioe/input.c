#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000


void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {

  uint32_t scancode = inl(KBD_ADDR);

  // 检查是否没有按键事件
  if (scancode == AM_KEY_NONE) {
    kbd->keydown = false;
    kbd->keycode = AM_KEY_NONE;
  } else {

    kbd->keydown = ((scancode & KEYDOWN_MASK) != 0);

    kbd->keycode = scancode & ~KEYDOWN_MASK;
  }
}
