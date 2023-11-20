#include "MarsGrid.h"
#include <string>
#include <unordered_map>
#ifndef MARS_ROVER_ROVER_H
#define MARS_ROVER_ROVER_H


class Rover {
private:
    int posX, posY;
    char dir;
    MarsGrid& grid;
    std::unordered_map<char,std::string> dirMap = {{'N',"North"},{'W',"West"},{'E',"East"},{'S',"South"}};
public:
    Rover(int initialPosX, int initialPosY, char initialDir, MarsGrid& marsGrid);

    void printCurrStatus();

    std::pair<int,int> getCurrentPos();

    char getCurrentDir();

    void move();

    void turnLeft();

    void turnRight();
};


#endif //MARS_ROVER_ROVER_H
