#ifndef ROBOT
#define ROBOT

class Robot{
private :
    int x;
    int y;

    // lidar Lidar;
    // map Map;

public :
    
    //Constructor
    //Robot();
    Robot(int x, int y);

    //Destructor
    //~Robot();

    void Move(int p_x, int p_y);

    int GetX();
    int GetY();
};

#endif