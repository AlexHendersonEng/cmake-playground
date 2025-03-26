# CMake minimum version
cmake_minimum_required(VERSION 3.10)

# Project name
project(shared_library)

# Set output directories
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY  ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Add the math library
add_subdirectory(math)

# Create the main executable
add_executable(main main.cpp)

# Add include directory
include_directories(math)

# Link the executable to the math library
target_link_libraries(main math_functions)
