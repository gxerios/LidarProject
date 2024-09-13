#include <iostream>

#include "../include/robot.hpp"


Robot::Robot(int p_x, int p_y) : x(100), y(100){
    x = p_x;
    y = p_y;
}

void Robot::Move(int p_x, int p_y){
    this->x = p_x;
    this->y = p_y;
}

int Robot::GetX(){
    return x;
}

int Robot::GetY(){
    return y;
}