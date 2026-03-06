#include "space_age.h"

float age(planet_t planet, int64_t seconds){
    float earth_age   = seconds / 31557600.0;

    if (planet == MERCURY)return earth_age / orbital_periods[MERCURY];           //MERCURY
    else if (planet == VENUS) return earth_age / orbital_periods[VENUS];
    else if (planet == EARTH) return earth_age / orbital_periods[EARTH];
    else if (planet == MARS) return earth_age / orbital_periods[MARS];
    else if (planet == JUPITER) return earth_age / orbital_periods[JUPITER];
    else if (planet == SATURN) return earth_age / orbital_periods[SATURN];
    else if (planet == URANUS) return earth_age / orbital_periods[URANUS];
    else if (planet == NEPTUNE) return earth_age / orbital_periods[NEPTUNE];
    return -1;
}