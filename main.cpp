#include <iostream>

#include "is_void.hpp"

int main() {
    std::cout << std::boolalpha << is_void<int>::value << std::endl << is_void<void>::value << std::endl;
    return 0;
}