# Set the minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# Set the project name
project(ctest)

# Enable testing
enable_testing()

# Add the main library
add_library(math_lib math.cpp math.h)

# Add the executable for testing
add_executable(math_test test_math.cpp)

# Link the test executable with the main library
target_link_libraries(math_test PRIVATE math_lib)

# Add tests to CTest
add_test(NAME MathTests COMMAND math_test)
