
#include <iostream>
#include <cassert>
#include "factorial.h"

int main()
{
    try {
        assert(factorial(0) == 1);
        assert(factorial(1) == 1);
        assert(factorial(3) == 6);
        assert(factorial(6) == 720);
        assert(factorial(10) == 3628800);
        try {
            factorial(-1);
            std::cerr << "Test failed: expected exception for factorial of a negative number" 
<< std::endl;
            return 1;
        } catch (const std::invalid_argument& e) {
            std::cout << "Caught expected exception: " << e.what() << std::endl;
        }
        std::cout << "Test factorial() passed!" << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Test factorial() failed: " << e.what() << std::endl;
        return 1;
    }
    return 0;
}
