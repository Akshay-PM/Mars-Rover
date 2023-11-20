
#include "MarsGrid.h"

MarsGrid::MarsGrid(int rows, int cols){
    this->rows = rows;
    this->cols = cols;
    grid = std::vector<std::vector<char>>(rows,std::vector<char>(cols,'X'));
}

void MarsGrid::addObstacles(std::vector<std::pair<int,int>> &obstacles){
    for(std::pair<int,int> obstacle: obstacles){
        grid[obstacle.first][obstacle.second]='O';
    }
}

bool MarsGrid::isMoveValid(int row, int col){
    if(row<0 or row>=rows or col<0 or col>=cols or grid[row][col]=='O'){
        return false;
    }
    return true;
}