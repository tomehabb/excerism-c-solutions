#include "space_age.h"

float age(planet_t planet, int64_t seconds) {
    if (planet < 0 || planet > NEPTUNE) {
        return -1.0f; // Invalid planet
    }
    return (float)((float)seconds / 31557600) / (float)orbital_period[planet];
}