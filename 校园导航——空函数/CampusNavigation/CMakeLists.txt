cmake_minimum_required(VERSION 3.28)
project(CampusNavigation)

set(CMAKE_CXX_STANDARD 17)

include_directories(
        LGraph
)

add_executable(
        CampusNavigation
        main.cpp
        LGraph.cpp
        LocationInfo.cpp
        Algorithm.h
        Algorithm.cpp
)
