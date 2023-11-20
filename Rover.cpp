
#include "Rover.h"

Rover::Rover(int initialPosX, int initialPosY, char initialDir, MarsGrid& marsGrid)
        : posX(initialPosX), posY(initialPosY), dir(initialDir), grid(marsGrid) {
    dirMap = {{'N', "North"}, {'W', "West"}, {'E', "East"}, {'S', "South"}};
}

void Rover::printCurrStatus() {
    std::cout << "Rover is at (" << posX << ", " << posY << ") facing " << dirMap[dir] << ".\n\n";
}

std::pair<int, int> Rover::getCurrentPos() {
    return {posX, posY};
}

char Rover::getCurrentDir() {
    return dir;
}

void Rover::move() {
    int newPosX = posX, newPosY = posY;
    switch (dir) {
        case 'N':
            newPosY = posY + 1;
            break;
        case 'S':
            newPosY = posY - 1;
            break;
        case 'E':
            newPosX = posX + 1;
            break;
        case 'W':
            newPosX = posX - 1;
            break;
    }
    if (grid.isMoveValid(newPosX, newPosY)) {
        posX = newPosX;
        posY = newPosY;
        std::cout << "Moved forward.\n";
    } else {
        std::cout << "Obstacle Ahead. Move Skipped.\n";
    }
}

void Rover::turnLeft() {
    std::cout << "Turned left.\n";
    switch (dir) {
        case 'N':
            dir = 'W';
            break;
        case 'S':
            dir = 'E';
            break;
        case 'E':
            dir = 'N';
            break;
        case 'W':
            dir = 'S';
            break;
    }
}

void Rover::turnRight() {
    std::cout << "Turned right.\n";
    switch (dir) {
        case 'N':
            dir = 'E';
            break;
        case 'S':
            dir = 'W';
            break;
        case 'E':
            dir = 'S';
            break;
        case 'W':
            dir = 'N';
            break;
    }
}