#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {

  uint16_t kbd_data = inw(KBD_ADDR);

  uint8_t keycode = kbd_data & 0xff;
  bool keydown = (kbd_data & 0x8000) != 0;

  kbd->keydown = keydown;
  kbd->keycode = keycode;
}
