#include "robot_simulator.h"

robot_status_t robot_create(robot_direction_t direction, int x, int y){
    robot_status_t status;

    status.direction = direction;
    status.position.x = x;
    status.position.y = y;

    return status;
}

void robot_move(robot_status_t *robot, const char *commands){

    while(*commands != '\0'){
        if(*commands == 'R'){
            robot->direction = (robot->direction + 1) % DIRECTION_MAX;
        }
        else if(*commands == 'L'){
            robot->direction = (robot->direction - 1 + DIRECTION_MAX) % DIRECTION_MAX;
        }
        else{
            if (robot->direction == 0) robot->position.y++;
            else if (robot->direction == 1) robot->position.x++;
            else if (robot->direction == 2) robot->position.y--;
            else robot->position.x--;
        }
        commands++;
    }
}