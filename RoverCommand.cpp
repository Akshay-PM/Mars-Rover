
#include "RoverCommand.h"

MoveCommand::MoveCommand(Rover& r) : rover(r) {}
void MoveCommand::execute() {
    rover.move();
}

TurnLeftCommand::TurnLeftCommand(Rover& r) : rover(r) {}
void TurnLeftCommand::execute() {
    rover.turnLeft();
}

TurnRightCommand::TurnRightCommand(Rover& r) : rover(r) {}
void TurnRightCommand::execute() {
    rover.turnRight();
}
