#include "hamming.h"
#include <string.h>

int compute(const char *lhs, const char *rhs) {
    int lhs_size = strlen(lhs);
    int rhs_size = strlen(rhs);
    int hamming_distance = 0;

    if (lhs_size != rhs_size) return -1;

    for (int i = 0; i < lhs_size; i++) {
        if (lhs[i] != rhs[i]) {
            hamming_distance++;
        }
    }

    return hamming_distance;
}