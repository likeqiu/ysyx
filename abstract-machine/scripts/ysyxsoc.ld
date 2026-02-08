ENTRY(_start)
PHDRS { text PT_LOAD; data PT_LOAD; }

MEMORY {
  MROM (rx)  : ORIGIN = 0x20000000, LENGTH = 0x00001000
  SRAM (rwx) : ORIGIN = 0x0f000000, LENGTH = 0x01000000
}

SECTIONS {
  .text : {
    *(entry)
    *(.text*)
  } > MROM : text

  etext = .;
  _etext = .;

  .rodata : {
    *(.rodata*)
  } > MROM : text

  .data : AT> MROM {
    _data_start = .;
    *(.data*)
    *(.sdata*)
    _data_end = .;
  } > SRAM : data

  edata = .;
  _data = .;

  .bss : {
    _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
    _bss_end = .;
  } > SRAM : data

  _data_load = LOADADDR(.data);

  _stack_top = ALIGN(0x1000);
  . = _stack_top + 0x8000;
  _stack_pointer = .;
  end = .;
  _end = .;
  _heap_start = ALIGN(0x1000);

  PROVIDE(_sram_end = ORIGIN(SRAM) + LENGTH(SRAM));
}
