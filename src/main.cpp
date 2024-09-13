#include <iostream>

#include "defines.hpp"
#include "robot.hpp"
#include "lidar.hpp"
#include "map.hpp"

int main(int argv, char**argc){
    std::cout << "################# ENTER LIDAR PROJECT ################" << std::endl;
    

    ////////////START TESTING ROBOT CLASS//////////////
    Robot robot(POSX, POSX);
    std::cout << robot.GetX() << std::endl;
    robot.Move(1,1);
    std::cout << robot.GetX() << std::endl;
    ////////////END TESTING ROBOT CLASS////////////////

    ////////////START TESTING LIDAR CLASS/////////////
    Lidar lidar;
    std::cout << lidar.Test() << std::endl;

    ////////////END TESTING LIDAR CLASS///////////////

    ////////////STAR TESTING MAP CLASS////////////////
    Map map;
    map.Display();
    std::cout << "------------" << std::endl;
    map.UpdateTile(1,2,1);
    map.Display();
    std::cout << map.GetTile(1,2) << std::endl;
    std::cout << map.GetTile(1,1) << std::endl;

    ////////////END TESTING MAP CLASS/////////////////
    std::cout << "################# EXIT LIDAR PROJECT ################" << std::endl;
    return EXIT_SUCCESS;
}