#include "robot_simulator.h"

robot_status_t robot_create(robot_direction_t direction, int x, int y){
    robot_status_t status;

    status.direction = direction;
    status.position.x = x;
    status.position.y = y;

    return status;
}

void robot_move(robot_status_t *robot, const char *commands){

    for(; *commands; ++commands){
        if(*commands == 'R'){
            robot->direction = (robot->direction + 1) % DIRECTION_MAX;
        }
        else if(*commands == 'L'){
            robot->direction = (robot->direction - 1 + DIRECTION_MAX) % DIRECTION_MAX;
        }
        else{
            switch (robot->direction){
            case 0:
                robot->position.y++;
                break;
            case 1:
                robot->position.x++;
                break;
            case 2:
                robot->position.y--;
                break;
            default:
                robot->position.x--;
                break;
            }
        }
    }
}