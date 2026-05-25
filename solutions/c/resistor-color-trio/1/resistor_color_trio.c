#include "resistor_color_trio.h"
#include <stdint.h>

#define GIGAOHMS_VAL 1000000000 // For define magnitude
#define MEGAOHMS_VAL 1000000 
#define KILOOHMS_VAL 1000
uint64_t actualValue(resistor_band_t colors[]); // Function declaration

resistor_value_t color_code(resistor_band_t resistor[]){
    resistor_value_t result; // Create new struct
    result.value = actualValue(resistor); // Find actual value of the resistor. 
    result.unit = OHMS; // By default magniture is OHMS
    if(result.value % GIGAOHMS_VAL == 0 && result.value >= GIGAOHMS_VAL) { // Find the metric prefix
        result.unit = GIGAOHMS;
        result.value = result.value / GIGAOHMS_VAL; // Find the value
    } 
    else if(result.value % MEGAOHMS_VAL == 0 && result.value >= MEGAOHMS_VAL) {
        result.unit = MEGAOHMS;
        result.value = result.value / MEGAOHMS_VAL;
    }
    else if(result.value % KILOOHMS_VAL == 0 && result.value >= KILOOHMS_VAL) {
        result.unit = KILOOHMS;
        result.value = result.value / KILOOHMS_VAL;
    }
    return result;

}

uint64_t actualValue(resistor_band_t colors[]){
    uint64_t actual_value = 10*colors[0] + colors[1]; 
    for (unsigned int i = 0; i < colors[2]; i++)
    {
        actual_value *= 10;// Are there how many zeros?
    }
    
    return actual_value;
}