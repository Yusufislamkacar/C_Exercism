#ifndef SPACE_AGE_H
#define SPACE_AGE_H

#include <stdint.h>

typedef enum planet {
   MERCURY,
   VENUS,
   EARTH,
   MARS,
   JUPITER,
   SATURN,
   URANUS,
   NEPTUNE,
} planet_t;

static const double orbital_periods[] = {
    0.2408467,   // MERCURY
    0.61519726,  // VENUS
    1.0,         // EARTH
    1.8808158,   // MARS
    11.862615,   // JUPITER
    29.447498,   // SATURN
    84.016846,   // URANUS
    164.79132    // NEPTUNE
};

float age(planet_t planet, int64_t seconds);

#endif
