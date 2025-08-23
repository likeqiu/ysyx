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

#include <device/map.h>
#include <sys/select.h>
#include <unistd.h>
#include <utils.h>

/* http://en.wikibooks.org/wiki/Serial_Programming/8250_UART_Programming */
// NOTE: this is compatible to 16550

#define CH_OFFSET 0

static uint8_t *serial_base = NULL;

// 在文件顶部或函数外部定义寄存器偏移量和状态位，增加代码可读性
#define RBR_OFFSET 0     // 接收缓冲寄存器 (读)
#define THR_OFFSET 0     // 发送保持寄存器 (写)
#define LSR_OFFSET 5     // 线路状态寄存器
#define LSR_DR 0x01      // 数据就绪位 (Data Ready)
#define LSR_TX_IDLE 0x20 // 发送缓冲区空闲

static void serial_putc(char ch) {
  MUXDEF(CONFIG_TARGET_AM, putch(ch), putc(ch, stderr));
}

static void serial_io_handler(uint32_t offset, int len, bool is_write) {
  assert(len == 1);
  switch (offset) {
  // 偏移量 0 同时用于读（RBR）和写（THR）
  case THR_OFFSET:
    if (is_write) {
      // 写操作：客户机向串口发送字符，NEMU 将其打印到终端
      serial_putc(serial_base[0]);
    } else {
      // 读操作：客户机从串口读取字符
      // 当客户机读取数据后，需要将“数据就绪”标志位清零
      serial_base[LSR_OFFSET] &= ~LSR_DR;
    }
    break;

  // 偏移量 5 用于读线路状态寄存器 (LSR)
  case LSR_OFFSET:
    if (!is_write) {
      // 1. 使用 select() 非阻塞地检查主机 stdin 是否有输入
      struct timeval tv = {.tv_sec = 0, .tv_usec = 0};
      fd_set fds;
      FD_ZERO(&fds);
      FD_SET(STDIN_FILENO, &fds);

      // 2. 如果 select 返回大于0，说明有数据可读
      if (select(STDIN_FILENO + 1, &fds, NULL, NULL, &tv) > 0) {
        // 3. 将“数据就绪”位置1，并从 stdin 读取一个字符到数据寄存器
        serial_base[LSR_OFFSET] |= LSR_DR;
        int ret = read(STDIN_FILENO, &serial_base[RBR_OFFSET], 1);
        assert(ret == 1);
      }

      // 默认情况下，我们假设发送缓冲区总是空闲的，以便客户机可以随时发送
      serial_base[LSR_OFFSET] |= LSR_TX_IDLE;
    }
    break;

  default:
    panic("do not support offset = %d", offset);
  }
}
void init_serial() {
  serial_base = new_space(8);
#ifdef CONFIG_HAS_PORT_IO
  add_pio_map ("serial", CONFIG_SERIAL_PORT, serial_base, 8, serial_io_handler);
#else
  add_mmio_map("serial", CONFIG_SERIAL_MMIO, serial_base, 8, serial_io_handler);
#endif

}
