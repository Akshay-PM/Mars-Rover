#include "Rover.h"
#ifndef MARS_ROVER_ROVERCOMMAND_H
#define MARS_ROVER_ROVERCOMMAND_H


class RoverCommand {
public:
    virtual ~RoverCommand() = default;
    virtual void execute() = 0;
};

class MoveCommand: public RoverCommand{
private:
    Rover& rover;
public:
    MoveCommand(Rover& r);

    void execute() override;
};

class TurnLeftCommand: public RoverCommand{
private:
    Rover& rover;
public:
    TurnLeftCommand(Rover& r);

    void execute() override;
};

class TurnRightCommand: public RoverCommand{
private:
    Rover& rover;
public:
    TurnRightCommand(Rover& r);

    void execute() override;
};


#endif //MARS_ROVER_ROVERCOMMAND_H
