
#include <iostream>
#include <cassert>
#include "fibonacci.h"

int main()
{
    try {
        assert(fibonacci(0) == 1);
        assert(fibonacci(1) == 1);
        assert(fibonacci(3) == 3);
        assert(fibonacci(6) == 13);
        assert(fibonacci(10) == 89);
        try {
            fibonacci(-1);
            std::cerr << "Test failed: expected exception for fibonacci of a negative number" << std::endl;
            return 1;
        } catch (const std::invalid_argument& e) {
            std::cout << "Caught expected exception: " << e.what() << std::endl;
        }
        std::cout << "Test fibonacci() passed!" << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Test fibonacci() failed: " << e.what() << std::endl;
        return 1;
    }
    return 0;
}
