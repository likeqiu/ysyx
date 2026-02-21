#include <am.h>
#include <klib.h>
#include <ysyxsoc.h>



#define UART_LCR_8N1 0x03
#define UART_LCR_DLAB (1 << 7)


void __am_uart_init() {

  outb(UART_IER, 0x00);
  outb(UART_LCR, UART_LCR_DLAB);
  outb(UART_DLM, 0x00);
  outb(UART_DLL, 0x01);
  outb(UART_LCR, UART_LCR_8N1);
  outb(UART_FCR, 0x06);

  }

void __am_uart_tx(AM_UART_TX_T *uart) {
  while ((inb(UART_LSR) & UART_LSR_THRE) == 0)
    ;

  outb(UART_THR, uart->data);
}

void __am_uart_rx(AM_UART_RX_T *uart) { uart->data = 0; }
