#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

#define HW_SCANCODE_ESCAPE 0x01 // SDL_SCANCODE_ESCAPE
#define HW_SCANCODE_F1 0x3b     // SDL_SCANCODE_F1
#define HW_SCANCODE_F2 0x3c
#define HW_SCANCODE_F3 0x3d
#define HW_SCANCODE_F4 0x3e
#define HW_SCANCODE_F5 0x3f
#define HW_SCANCODE_F6 0x40
#define HW_SCANCODE_F7 0x41
#define HW_SCANCODE_F8 0x42
#define HW_SCANCODE_F9 0x43
#define HW_SCANCODE_F10 0x44
#define HW_SCANCODE_F11 0x57
#define HW_SCANCODE_F12 0x58
#define HW_SCANCODE_GRAVE 0x29
#define HW_SCANCODE_1 0x02
#define HW_SCANCODE_2 0x03
#define HW_SCANCODE_3 0x04
#define HW_SCANCODE_4 0x05
#define HW_SCANCODE_5 0x06
#define HW_SCANCODE_6 0x07
#define HW_SCANCODE_7 0x08
#define HW_SCANCODE_8 0x09
#define HW_SCANCODE_9 0x0a
#define HW_SCANCODE_0 0x0b
#define HW_SCANCODE_MINUS 0x0c
#define HW_SCANCODE_EQUALS 0x0d
#define HW_SCANCODE_BACKSPACE 0x0e
#define HW_SCANCODE_TAB 0x0f
#define HW_SCANCODE_Q 0x10
#define HW_SCANCODE_W 0x11
#define HW_SCANCODE_E 0x12
#define HW_SCANCODE_R 0x13
#define HW_SCANCODE_T 0x14
#define HW_SCANCODE_Y 0x15
#define HW_SCANCODE_U 0x16
#define HW_SCANCODE_I 0x17
#define HW_SCANCODE_O 0x18
#define HW_SCANCODE_P 0x19
#define HW_SCANCODE_LEFTBRACKET 0x1a
#define HW_SCANCODE_RIGHTBRACKET 0x1b
#define HW_SCANCODE_BACKSLASH 0x2b
#define HW_SCANCODE_CAPSLOCK 0x3a
#define HW_SCANCODE_A 0x1e
#define HW_SCANCODE_S 0x1f
#define HW_SCANCODE_D 0x20
#define HW_SCANCODE_F 0x21
#define HW_SCANCODE_G 0x22
#define HW_SCANCODE_H 0x23
#define HW_SCANCODE_J 0x24
#define HW_SCANCODE_K 0x25
#define HW_SCANCODE_L 0x26
#define HW_SCANCODE_SEMICOLON 0x27
#define HW_SCANCODE_APOSTROPHE 0x28
#define HW_SCANCODE_RETURN 0x1c
#define HW_SCANCODE_LSHIFT 0x2a
#define HW_SCANCODE_Z 0x2c
#define HW_SCANCODE_X 0x2d
#define HW_SCANCODE_C 0x2e
#define HW_SCANCODE_V 0x2f
#define HW_SCANCODE_B 0x30
#define HW_SCANCODE_N 0x31
#define HW_SCANCODE_M 0x32
#define HW_SCANCODE_COMMA 0x33
#define HW_SCANCODE_PERIOD 0x34
#define HW_SCANCODE_SLASH 0x35
#define HW_SCANCODE_RSHIFT 0x36
#define HW_SCANCODE_LCTRL 0x1d
#define HW_SCANCODE_APPLICATION 0x5d
#define HW_SCANCODE_LALT 0x38
#define HW_SCANCODE_SPACE 0x39
#define HW_SCANCODE_RALT 0xe038
#define HW_SCANCODE_RCTRL 0xe01d
#define HW_SCANCODE_UP 0xe048
#define HW_SCANCODE_DOWN 0xe050
#define HW_SCANCODE_LEFT 0xe04b
#define HW_SCANCODE_RIGHT 0xe04d
#define HW_SCANCODE_INSERT 0xe052
#define HW_SCANCODE_DELETE 0xe053
#define HW_SCANCODE_HOME 0xe047
#define HW_SCANCODE_END 0xe04f
#define HW_SCANCODE_PAGEUP 0xe049
#define HW_SCANCODE_PAGEDOWN 0xe051

#define KEYMAP_INIT(key) [HW_SCANCODE_##key] = AM_KEY_##key,

static const int keymap[0x10000] = {AM_KEYS(KEYMAP_INIT)};

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {

  uint16_t kbd_data = inw(KBD_ADDR);

  uint16_t keycode = kbd_data & 0xffff; // 保留 16 位以处理扩展键码
  bool keydown = (kbd_data & KEYDOWN_MASK) != 0;

  kbd->keydown = keydown;
  kbd->keycode = (keycode < sizeof(keymap) / sizeof(keymap[0]) && keymap[keycode]) ? keymap[keycode] : AM_KEY_NONE;

 
}
