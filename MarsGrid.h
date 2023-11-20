
#include <vector>
#include <iostream>

#ifndef MARS_ROVER_MARSGRID_H
#define MARS_ROVER_MARSGRID_H


class MarsGrid{
private:
    int rows, cols;
    std::vector<std::vector<char>> grid;
public:
    MarsGrid(int rows, int cols);

    void addObstacles(std::vector<std::pair<int,int>> &obstacles);

    bool isMoveValid(int row, int col);
};


#endif //MARS_ROVER_MARSGRID_H
