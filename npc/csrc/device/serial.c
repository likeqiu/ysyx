#include <device/map.h>
#include <utils.h>


#define THR_OFFSET 0 
#define RBR_OFFSET 0 
#define LSR_OFFSET 5 


#define LSR_THRE_MASK 0x20

static uint8_t *serial_port_base = NULL;


static void serial_io_handler(uint32_t offset, int len, bool is_write) {
  assert(len == 1 || len == 2 || len == 4);

  if (is_write) {
    // 处理写操作（允许 32-bit 对齐写）
    if (offset <= THR_OFFSET && (offset + len) > THR_OFFSET) {
      putc(serial_port_base[THR_OFFSET], stderr);
    }
  } else {
    // 读状态寄存器（允许 32-bit 对齐读覆盖 LSR）
    if (offset <= LSR_OFFSET && (offset + len) > LSR_OFFSET) {
      serial_port_base[LSR_OFFSET] = LSR_THRE_MASK;
    }
  }
}

void init_serial() {
  serial_port_base = new_space(8);
  // 注册 MMIO 映射，将物理地址与我们的回调函数绑定
  add_mmio_map("serial", CONFIG_SERIAL_MMIO, serial_port_base, 8,
               serial_io_handler);
}
