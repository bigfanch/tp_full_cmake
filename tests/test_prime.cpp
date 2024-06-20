
#include <iostream>
#include <cassert>
#include "prime.h"

int main()
{
    try {
        assert(prime(1));
        assert(prime(3));
        assert(!prime(6));
        assert(prime(1021));
        assert(!prime(1023));
        try {
            prime(-1);
            std::cerr << "Test failed: expected exception for prime of a negative number" << std::endl;
            return 1;
        } catch (const std::invalid_argument& e) {
            std::cout << "Caught expected exception: " << e.what() << std::endl;
        }
        std::cout << "Test prime() passed!" << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Test prime() failed: " << e.what() << std::endl;
        return 1;
    }
    return 0;
}
