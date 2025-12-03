#include "darts.h"

float distanceCenter(coordinate_t coor){
    return sqrt(coor.x *coor.x + coor.y*coor.y);
}

uint8_t score(coordinate_t coor){
    float a = distanceCenter(coor);
    if(a <= 1) return 10;
    else if(a <= 5) return 5;
    else if (a <= 10) return 1;
    else return 0;
}