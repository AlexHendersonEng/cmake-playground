# Set the minimum version of CMake that can be used
cmake_minimum_required(VERSION 3.10)

# Set the project name
project(installing)

# Add an executable
add_executable(hello_world main.cpp)

# Installation setup
install(TARGETS hello_world DESTINATION bin)