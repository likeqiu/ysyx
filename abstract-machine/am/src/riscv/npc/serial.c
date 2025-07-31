#include<am.h>
#include<npc.h>
#include<klib.h>

#define THR_REG (SERIAL_PORT + 0x0)
#define LSR_REG (SERIAL_PORT + 0x5)
#define LSR_THRE_BIT (1 << 5)

void __am_uart_tx(AM_UART_TX_T *uart) {

  printf("11111111\n");
  while ((*(volatile uint8_t *)LSR_REG & LSR_THRE_BIT) == 0)
    ;

  *(volatile uint8_t *)THR_REG = uart->data;
}

void __am_uart_rx(AM_UART_RX_T *uart) {
  printf("2222222\n");
  uart->data = 0;
}
