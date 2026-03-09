#include "eliuds_eggs.h"


unsigned int egg_count(unsigned int decimalEgg){
    unsigned int egg = 0;
    while(decimalEgg != 0){
        if(decimalEgg % 2 == 1) egg++;
        decimalEgg = decimalEgg / 2;
    }
    return egg;
}