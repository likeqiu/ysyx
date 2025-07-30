#include<common.h>
#include<utils.h>
/*#ifndef CONFIG_TARGET_AM
#include<SDL2/SDL.h>
#endif
*/
void init_map();
void init_serial();


void device_uodate(){

    static uint64_t last = 0;

}


void init_device(){
    init_map();
    IFDEF(CONFIG_HAS_SERIAL, init_serial());
    IFDEF(CONFIG_HAS_TIMER, init_timer());
}