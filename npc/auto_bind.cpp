#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top) {
	nvboard_bind_pin( &top->select, 3, BTNL, BTNC, BTNR);
	nvboard_bind_pin( &top->a, 4, SW3, SW2, SW1, SW0);
	nvboard_bind_pin( &top->b, 4, SW8, SW7, SW6, SW5);
	nvboard_bind_pin( &top->seg0, 7, SEG0A, SEG0B, SEG0C, SEG0D, SEG0E, SEG0F, SEG0G);
	nvboard_bind_pin( &top->seg1, 7, SEG1A, SEG1B, SEG1C, SEG1D, SEG1E, SEG1F, SEG1G);
	nvboard_bind_pin( &top->zero, 1, LD0);
	nvboard_bind_pin( &top->compare_out, 1, LD1);
	nvboard_bind_pin( &top->cin, 1, LD2);
	nvboard_bind_pin( &top->overflow, 1, LD3);
}
