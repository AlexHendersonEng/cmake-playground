#pragma once

#ifdef EXPORT_MATH_FUNCTIONS
    #define MATH_API __declspec(dllexport)
#else
    #define MATH_API __declspec(dllimport)
#endif

MATH_API int add(int a, int b);
MATH_API int multiply(int a, int b);
