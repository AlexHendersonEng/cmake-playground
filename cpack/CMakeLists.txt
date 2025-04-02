# Set the minimum version of CMake that can be used
cmake_minimum_required(VERSION 3.10)

# Set the project name
project(hello_world)

# Add an executable
add_executable(${PROJECT_NAME} main.cpp)

# Installation setup
install(TARGETS ${PROJECT_NAME} DESTINATION bin)

# CPack configuration
set(CPACK_GENERATOR "ZIP")
include(CPack)