#include "queen_attack.h"

int slope(position_t queen_1, position_t queen_2) {
    int numerator = (int)queen_2.column - (int)queen_1.column;
    int denomenator = (int)queen_2.row - (int)queen_1.row;

    return numerator / denomenator;
}

attack_status_t can_attack(position_t queen_1, position_t queen_2) {

    attack_status_t attackStatus = CAN_NOT_ATTACK;

    if(queen_1.row == queen_2.row && queen_1.column == queen_2.column) {
        return INVALID_POSITION;
    }

    if (queen_1.row > 7 || queen_2.row > 7 || queen_1.column > 7 || queen_2.column > 7) {
        return INVALID_POSITION;
    } else if (queen_1.row == queen_2.row || queen_1.column == queen_2.column)
    {
        return CAN_ATTACK;
    } else if (slope(queen_1, queen_2) == 1 || slope(queen_1, queen_2) == -1)
    {
        return CAN_ATTACK;
    }
    return attackStatus;
}


