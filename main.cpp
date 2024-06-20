
#include <iostream>

#include "factorial.h"
#include "fibonacci.h"
#include "palindrome.h"
#include "prime.h"

int main()
{
    std::cout << "Factorial computation : factorial(6) = " << factorial(6) << std::endl;
    std::cout << "Fibonacci computation : fibonacci(10) = " << fibonacci(10) << std::endl;
    std::cout << "Palindrome check      : palindrome(""abba"") = " << palindrome("abba") << std::endl;
    std::cout << "Prime computation     : prime(127) = " << prime(127) << std::endl;
}
