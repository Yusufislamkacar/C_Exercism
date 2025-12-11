#include "space_age.h"

float age(planet_t planet, int64_t seconds){
    float earth_age   = seconds / 31557600.0;

    if (planet == 0)return earth_age / 0.2408467;           //MERCURY
    else if (planet == 1) return earth_age / 0.61519726;
    else if (planet == 2) return earth_age / 1.0;
    else if (planet == 3) return earth_age / 1.8808158;
    else if (planet == 4) return earth_age / 11.862615;
    else if (planet == 5) return earth_age / 29.447498;
    else if (planet == 6) return earth_age / 84.016846;
    else if (planet == 7) return earth_age / 164.79132;
    else return -1;
}