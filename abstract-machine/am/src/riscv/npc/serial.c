#include <am.h>
#include <klib.h>
#include <npc.h>

#define THR_REG (SERIAL_PORT + 0x0)
#define LSR_REG (SERIAL_PORT + 0x5)
#define LSR_THRE_BIT (1 << 5)

void __am_uart_tx(AM_UART_TX_T *uart) {


  while ((inb(LSR_REG) & LSR_THRE_BIT) == 0)
    ;

  outb(THR_REG, uart->data);
}

void __am_uart_rx(AM_UART_RX_T *uart) { uart->data = 0; }
