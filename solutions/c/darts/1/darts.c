#include "darts.h"
#include <stdlib.h>

int score(coordinate_t coordinates) {
    float d2 = coordinates.x * coordinates.x + coordinates.y * coordinates.y;

    if (d2 <= 1.0f)   return 10;  // radius 1
    if (d2 <= 25.0f)  return 5;   // radius 5
    if (d2 <= 100.0f) return 1;   // radius 10
    return 0;
}