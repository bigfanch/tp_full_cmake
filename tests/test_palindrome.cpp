
#include <iostream>
#include <cassert>
#include "palindrome.h"

int main()
{
    try {
        assert(palindrome(""));
        assert(palindrome("A"));
        assert(palindrome("ABBA"));
        assert(!palindrome("BABA"));
        assert(!palindrome("ABACAB"));
        assert(palindrome("ABACABA"));
        std::cout << "Test palindrome() passed!" << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Test palindrome() failed: " << e.what() << std::endl;
        return 1;
    }
    return 0;
}
