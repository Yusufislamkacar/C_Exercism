#ifndef DARTS_H
#define DARTS_H
#include <stdint.h>
#include <math.h>

typedef struct
{
    float x;
    float y;
}coordinate_t;

float distanceCenter(coordinate_t coor);
uint8_t score(coordinate_t coor);

#endif
