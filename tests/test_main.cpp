#include <iostream>
#include "../include/utils.h"

int testAddition() {
    return 1 + 1;
}

int main() {
    std::cout << "Running tests..." << std::endl;
    int result = testAddition();
    std::cout << "Test result: " << result << std::endl;
    return 0;
}
