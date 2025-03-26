# Add preprocessing definition
add_compile_definitions(EXPORT_MATH_FUNCTIONS)

# Create a shared library called math_functions
add_library(math_functions SHARED math_functions.cpp)
