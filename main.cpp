#include <vector>
#include "Rover.h"
#include "RoverCommand.h"
#include "CommandExecutor.h"

int main() {
    std::vector<char> commands = {'M', 'M', 'R', 'M', 'L', 'M'}; // commands
    std::vector<std::pair<int,int>> obstacles = {{0,1},{3,5}}; // obstacles
    MarsGrid marsGrid(10,10); // initializing the mars_grid
    marsGrid.addObstacles(obstacles); // adding obstacles to the mars_grid_object
    Rover rover(0,0,'N',marsGrid); // (initial_x_coord, initial_y_coord, initial_direction, mars_grid_object) initializing the rover on a mard_grid
    CommandExecutor commandExecutor(rover, commands); // (rover_object, commands) initializing command_executor
    commandExecutor.execute(); // executing commands
}
