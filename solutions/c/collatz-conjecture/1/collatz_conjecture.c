#include "collatz_conjecture.h"

int steps(int start) {
    int steps = 0;
    int nextStep = start;

    if (start <= 0 ) return ERROR_VALUE;
    

    while (nextStep != 1) {
        if (nextStep % 2 == 0) {
            nextStep = nextStep / 2;
            steps += 1;
        } else {
            nextStep = (nextStep * 3) + 1;
            steps += 1;
        }
    }

    return steps;
}