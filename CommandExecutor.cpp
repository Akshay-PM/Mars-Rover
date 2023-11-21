
#include "CommandExecutor.h"

CommandExecutor::CommandExecutor(Rover& rover, std::vector<char>& commands) : rover(&rover) {
    for (char command : commands) {
        switch (command) {
            case 'M':
                this->commands.push_back(new MoveCommand(rover));
                break;
            case 'L':
                this->commands.push_back(new TurnLeftCommand(rover));
                break;
            case 'R':
                this->commands.push_back(new TurnRightCommand(rover));
                break;
            default:
                std::cout << "Invalid Command: \"" << command << "\". Command Skipped.\n\n";
        }
    }
}

void CommandExecutor::execute() {
    for (RoverCommand* command : commands) {
        command->execute();
        rover->printCurrStatus();
    }
    printFinalStatus();
}

void CommandExecutor::printFinalStatus() {
    auto [finalPosX, finalPosY] = rover->getCurrentPos();
    char curDir = rover->getCurrentDir();
    std::cout << "Final Position: (" << finalPosX << "," << finalPosY << "," << curDir << ")\n";
}

CommandExecutor::~CommandExecutor() {
    for (RoverCommand* command : commands) {
        delete command;
    }
}