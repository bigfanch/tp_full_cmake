/** @file
 */

#include <stdexcept>
#include "prime.h"

/**
 * @fn prime
 * @brief Check for prime number
 * @param n positive integer on input
 * @return true if the input is prime
 */
bool prime(int n)
{
    if ( n < 0 ) {
	throw std::invalid_argument("invalid on negative input");
    }
    if ( n == 1 ) {
	return true;
    }
    else if ( n == 2 ) {
 	return true;
    }
    else {
	for ( int d = 2; d*d < n; d++ ) {
	    if ( n % d == 0 ) {
		return false;
	    }
        } 
    }
    return true;
}

