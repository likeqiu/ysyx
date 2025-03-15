#include <nvboard.h>
#include "VCounterModule.h"

void nvboard_bind_all_pins(VCounterModule* top) {
	nvboard_bind_pin( &top->io_enable, 1, SW0);
	nvboard_bind_pin( &top->io_reset, 1, SW1);
	nvboard_bind_pin( &top->io_led_second1, 7, SEG0A, SEG0B, SEG0C, SEG0D, SEG0E, SEG0F, SEG0G);
	nvboard_bind_pin( &top->io_led_second2, 7, SEG1A, SEG1B, SEG1C, SEG1D, SEG1E, SEG1F, SEG1G);
	nvboard_bind_pin( &top->io_led_minutes1, 7, SEG2A, SEG2B, SEG2C, SEG2D, SEG2E, SEG2F, SEG2G);
	nvboard_bind_pin( &top->io_led_minutes2, 7, SEG3A, SEG3B, SEG3C, SEG3D, SEG3E, SEG3F, SEG3G);
	nvboard_bind_pin( &top->io_led_hour1, 7, SEG4A, SEG4B, SEG4C, SEG4D, SEG4E, SEG4F, SEG4G);
	nvboard_bind_pin( &top->io_led_hour1, 7, SEG5A, SEG5B, SEG5C, SEG5D, SEG5E, SEG5F, SEG5G);
}
