cmake_minimum_required(VERSION 3.27)
project(CarShowroomClassesProject)

set(CMAKE_CXX_STANDARD 17)

add_executable(CarShowroomClassesProject main.cpp
        Vehicle.h
        Showroom.h
        Dealership.h
        Vehicle.cpp
        Showroom.cpp
        Dealership.cpp)
