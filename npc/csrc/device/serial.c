#include <device/map.h>
#include <utils.h>

// --- UART 寄存器偏移量和掩码 ---
// 根据 8250/16550 UART 标准
#define THR_OFFSET 0 // Transmitter Holding Register (写)
#define RBR_OFFSET 0 // Receiver Buffer Register (读)
#define LSR_OFFSET 5 // Line Status Register

// LSR 寄存器的 THRE (Transmitter Holding Register Empty) 位
#define LSR_THRE_MASK 0x20

static uint8_t *serial_port_base = NULL;

// --- 统一的 I/O 回调函数 ---
static void serial_io_handler(uint32_t offset, int len, bool is_write) {
  // 断言确保访问长度为1字节，这是串口寄存器的通常访问方式
  assert(len == 1);

  if (is_write) {
    // 处理写操作
    switch (offset) {
    case THR_OFFSET:
      // 当客户程序向 THR (偏移量0) 写入数据时，
      // 我们将其直接输出到宿主机的 stderr
      putc(serial_port_base[THR_OFFSET], stderr);
      break;
    default:
      // 忽略对其他寄存器的写入
      break;
    }
  } else {
    // 处理读操作
    switch (offset) {
    case LSR_OFFSET:
      // 当客户程序读取 LSR (偏移量5) 时，
      // 我们总是报告 THR 为空，表示可以随时接收新数据。
      // 这个值是在 Host 读取之前设置的，之后会被 map_read 读取并返回。
      serial_port_base[LSR_OFFSET] = LSR_THRE_MASK;
      break;
    default:
      // 忽略对其他寄存器的读取
      break;
    }
  }
}

void init_serial() {
  serial_port_base = new_space(8);
  // 注册 MMIO 映射，将物理地址与我们的回调函数绑定
  add_mmio_map("serial", CONFIG_SERIAL_MMIO, serial_port_base, 8,
               serial_io_handler);
}