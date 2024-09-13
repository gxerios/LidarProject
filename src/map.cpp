#include<iostream>

#include "../include/map.hpp"

#define ARRAY {{0,0,0,0,0,0,0,0,0,0},\
                {0,0,0,0,0,0,0,0,0,0},\
                {0,0,0,0,0,0,0,0,0,0},\
                {0,0,0,0,0,0,0,0,0,0},\
                {0,0,0,0,0,0,0,0,0,0},\
                {0,0,0,0,0,0,0,0,0,0},\
                {0,0,0,0,0,0,0,0,0,0},\
                {0,0,0,0,0,0,0,0,0,0},\
                {0,0,0,0,0,0,0,0,0,0},\
                {0,0,0,0,0,0,0,0,0,0}}

#define ARRAY_SIZE      (10)
Map::Map(){
    size = ARRAY_SIZE;
    int temp[ARRAY_SIZE][ARRAY_SIZE]=ARRAY;
    for(int i = 0; i < ARRAY_SIZE;i++){
        for(int j = 0; j < ARRAY_SIZE;j++){
            array[i][j] = temp[i][j];
        }    
    }
}


int Map::Display(){
    for(int i = 0; i < ARRAY_SIZE;i++){
        for(int j = 0; j < ARRAY_SIZE;j++){
            std::cout<<array[i][j];
        }    
        std::cout<<"\n\r";
    }
    return 0;
}

int Map::UpdateTile(int p_x, int p_y, int p_value){
    array[p_y][p_x] = p_value;
    return 0;
}

int Map::GetTile(int p_x, int p_y){
    return array[p_y][p_x];
}