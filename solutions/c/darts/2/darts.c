#include "darts.h"

float distanceCenter(coordinate_t coor){
    return sqrt(coor.x *coor.x + coor.y*coor.y);
}

uint8_t score(coordinate_t coor){
    if(distanceCenter(coor) <= 1) return 10;
    else if(distanceCenter(coor) <= 5) return 5;
    else if (distanceCenter(coor) <= 10) return 1;
    else return 0;
}