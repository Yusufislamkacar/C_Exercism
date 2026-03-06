#include "darts.h"

uint8_t score(coordinate_t coor){
    float a = coor.x *coor.x + coor.y*coor.y;
    if(a <= 1) return 10;
    else if(a <= 5*5) return 5;
    else if (a <= 10*10) return 1;
    else return 0;
}