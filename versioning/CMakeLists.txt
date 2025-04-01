# Define the minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# Define project name and version
project(versioning VERSION 1.2.3)

# Configure a header file to pass version information to the source code
configure_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/version.h.in
    ${CMAKE_CURRENT_BINARY_DIR}/version.h
)

# Add an executable target
add_executable(versioning main.cpp)

# Include the generated version header
target_include_directories(versioning PRIVATE ${CMAKE_CURRENT_BINARY_DIR})
