#include "grains.h"


uint64_t square(uint8_t index){
    if (index > 64 || index == 0) return 0;

    uint64_t piece = 1;
    for (int i = 1; i < index; i++)
    {
        piece*=2;
    }
    return piece;
}
uint64_t total(void){
    uint64_t total = 1;
    uint64_t piece = 1;
    for (int i = 0; i < 64; i++)
    {
        piece*=2;
        total+=piece;
    }
    return total;
}