/** @file
 */

#include <stdexcept>
#include "factorial.h"
 
/**
 * @fn factorial
 * @brief Factorial computation
 * @param n positive integer on input
 * @return computed factorial
 */
int factorial(int n)
{
    if ( n < 0 ) {
	throw std::invalid_argument("invalid on negative input");
    }
    if ( n == 0 || n == 1 ) {
	return 1;
    }
    else {
	return (n * factorial(n - 1));
    }
}

