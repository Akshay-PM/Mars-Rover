#include <vector>
#include <iostream>
#include "Rover.h"
#include "RoverCommand.h"
#ifndef MARS_ROVER_COMMANDEXECUTOR_H
#define MARS_ROVER_COMMANDEXECUTOR_H


class CommandExecutor{
private:
    std::vector<RoverCommand*> commands;
    Rover* rover;
public:
    CommandExecutor(Rover& rover, std::vector<char>& commands);

    void execute();

    void printFinalStatus();

    ~CommandExecutor();
};


#endif //MARS_ROVER_COMMANDEXECUTOR_H
