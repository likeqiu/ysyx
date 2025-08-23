#include <am.h>
#include<nemu.h>
#include <klib.h>

// 定义UART寄存器端口地址和状态位
#define THR_REG (SERIAL_PORT + 0x0) // 发送保持寄存器 (写)
#define RBR_REG (SERIAL_PORT + 0x0) // 接收缓冲寄存器 (读)
#define LSR_REG (SERIAL_PORT + 0x5) // 线路状态寄存器
#define LSR_DR_BIT (1 << 0)         // 数据就绪位 (Data Ready)
#define LSR_THRE_BIT (1 << 5)       // 发送保持寄存器空闲位

// 发送一个字符
void __am_uart_tx(AM_UART_TX_T *uart) {
  // 1. 循环查询线路状态寄存器(LSR)，直到发送保持寄存器(THR)为空
  //    (LSR_THRE_BIT位为1表示空闲，可以发送)
  while ((inb(LSR_REG) & LSR_THRE_BIT) == 0)
    ;

  // 2. 将字符数据写入发送保持寄存器(THR)
  outb(THR_REG, uart->data);
}

// 接收一个字符
void __am_uart_rx(AM_UART_RX_T *uart) {
  // 1. 先读取线路状态寄存器(LSR)
  uint8_t status = inb(LSR_REG);

  // 2. 检查数据就绪位(LSR_DR_BIT)是否为1
  if (status & LSR_DR_BIT) {
    // 如果为1，表示有数据到达，可以接收
    // 3. 从接收缓冲寄存器(RBR)读取一个字节
    uart->data = inb(RBR_REG);
  } else {
    // 如果为0，表示没有新的数据
    uart->data = -1; // 使用-1或AM_KEY_NONE作为无输入的标志
  }
}