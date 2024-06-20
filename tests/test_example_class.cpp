#include <iostream>
#include <cassert>
#include "example_class.h"

int main()
{
    try {
	ExampleClass ec(3);
	assert(ec.getVal() == 3);
	ec.setVal(5);
	assert(ec.getVal() == 5);
        std::cout << "Test ExampleClass() passed!" << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Test ExampleClass() failed: " << e.what() << std::endl;
        return 1;
    }
    return 0;
}
