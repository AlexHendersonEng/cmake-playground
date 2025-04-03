#include "math.h"
#include <iostream>

int main() {
    if (add(2, 3) != 5) {
        std::cerr << "Test failed: add(2, 3) != 5\n";
        return 1;
    }
    if (add(-1, 1) != 0) {
        std::cerr << "Test failed: add(-1, 1) != 0\n";
        return 1;
    }
    std::cout << "All tests passed!\n";
    return 0;
}
