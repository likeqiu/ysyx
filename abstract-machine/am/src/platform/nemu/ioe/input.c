#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

// AM IOE (Input/Output Extension) 的一部分，用于处理键盘输入
// __am_input_keybrd 函数由上层应用（如 readkey test）通过
// ioe_read(AM_INPUT_KEYBRD, ...) 调用
void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  // 从 NEMU 模拟的键盘控制器寄存器 (KBD_ADDR) 读取原始数据。
  // 这是一个内存映射 I/O (MMIO) 操作。
  // inl() 是一个内联函数，用于从指定地址读取一个 32 位的长字。
  uint32_t scancode = inl(KBD_ADDR);

  // 检查读取到的值是否为 AM_KEY_NONE (通常定义为 0)。
  // 如果是，表示当前没有新的按键事件。
  if (scancode == AM_KEY_NONE) {
    kbd->keydown = false;       // 没有按键按下
    kbd->keycode = AM_KEY_NONE; // 键码为无
  } else {
    // 如果读取到的值不为 AM_KEY_NONE，表示有按键事件发生。
    // 需要解析这个值来确定是哪个键以及它的状态（按下或释放）。

    // 根据 NEMU 的约定，我们检查 KEYDOWN_MASK 位 (第15位)。
    // 如果该位为 0，表示是按键按下 (keydown) 事件。
    // 如果该位为 1，表示是按键释放 (keyup) 事件。
    // `keydown` 是一个布尔值，所以 (scancode & KEYDOWN_MASK) == 0 会在按下时为
    // true。
    kbd->keydown = ((scancode & KEYDOWN_MASK) == 0);

    // 通过与 KEYDOWN_MASK 的反码进行按位与操作，
    // 可以清除状态位，只留下纯净的按键码 (keycode)。
    // 例如，如果 scancode 是 0x8001 (ESC释放)，`0x8001 & ~0x8000` 的结果是 1
    // (AM_KEY_ESCAPE)。
    kbd->keycode = scancode & ~KEYDOWN_MASK;
  }
}

