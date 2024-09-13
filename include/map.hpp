#ifndef MAP
#define MAP

class Map{
private :
    int size;
    int array[10][10];
public :

    //Constructor
    Map();

    //Destructor
    //~Map();
    int Display();
    int UpdateTile(int p_x, int p_y, int p_value);
    int GetTile(int p_x, int p_y);

};

#endif