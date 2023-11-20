cmake_minimum_required(VERSION 3.26)
project(Mars_Rover)

set(CMAKE_CXX_STANDARD 20)

add_executable(Mars_Rover main.cpp
        RoverCommand.h
        Rover.cpp
        RoverCommand.cpp
        MarsGrid.h
        MarsGrid.cpp
        CommandExecutor.cpp
)
