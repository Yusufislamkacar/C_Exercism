#include "resistor_color_duo.h"

uint16_t color_code(resistor_band_t colors[]){
    int a = 10*colors[0];
    a += colors[1];
    return a;
}