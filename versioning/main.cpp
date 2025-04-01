#include <iostream>
#include "version.h"

int main() {
    std::cout << "Project Version: "
              << PROJECT_VERSION_MAJOR << "."
              << PROJECT_VERSION_MINOR << "."
              << PROJECT_VERSION_PATCH << std::endl;
    return 0;
}
