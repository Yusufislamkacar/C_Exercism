#include "space_age.h"

float age(planet_t planet, int64_t seconds){
    float earth_age = seconds / 31557600.0;
    if (planet <0 || planet >8) return -1;

    return earth_age / orbital_periods[planet];

}