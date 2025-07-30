#ifndef __DEVICE_MMIO_H__
#define __DEVICE_MMIO_H__

#include <common.h>

typedef void (*io_callback_t)(uint32_t, int, bool);

void add_pio_map(const char *name, ioaddr_t addr, void *space, uint32_t len,
                 io_callback_t callback);

void add_mmio_map(const char *name, paddr_t addr, void *space, uint32_t len,
                  io_callback_t callback);
word_t mmio_read(paddr_t addr, int len);
void mmio_write(paddr_t addr, int len, word_t data);

#endif
