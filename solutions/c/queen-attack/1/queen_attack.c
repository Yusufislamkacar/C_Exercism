#include "queen_attack.h"
#include <stdlib.h>

attack_status_t can_attack(position_t white_queen, position_t black_queen){
    if(white_queen.column == black_queen.column && white_queen.row == black_queen.row) {
        return INVALID_POSITION;
    }

    if (white_queen.column > 7 || white_queen.row > 7 || black_queen.column > 7 || black_queen.row > 7){
        return INVALID_POSITION;
    } 

    if(white_queen.column == black_queen.column || white_queen.row == black_queen.row || abs(white_queen.column - black_queen.column) == abs(white_queen.row - black_queen.row)) {
        return CAN_ATTACK;
    }
    else {
        return CAN_NOT_ATTACK;
    }

}