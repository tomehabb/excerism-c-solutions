#include "grains.h"

uint64_t square(uint8_t index) {
    if (index <= 0 || index > 64) {
        return 0;
    }
    return 1ULL << (index -1);
}

uint64_t total(void) {
    uint64_t total = 0;
    uint8_t size = 64;

    for (uint8_t i = 1; i <= size; i++) {
        total += square(i);
    }

    return total;
}