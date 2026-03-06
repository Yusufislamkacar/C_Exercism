#include "eliuds_eggs.h"


unsigned int egg_count(unsigned int n){
    unsigned int decimalEgg = n;
    if (decimalEgg == 0) return 0;
    int egg = 0;
    while(decimalEgg/2 != 0){
        if(decimalEgg % 2 == 1) egg++;
        decimalEgg = decimalEgg / 2;
    }
    return egg+1;
}