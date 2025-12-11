#include "darts.h"

uint8_t score(coordinate_t coor){
    float a = coor.x *coor.x + coor.y*coor.y;
    if(a <= 1) return 10;
    else if(a <= 25) return 5;
    else if (a <= 100) return 1;
    else return 0;
}