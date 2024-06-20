/** @file
 */

#include <stdexcept>
#include "fibonacci.h"

/**
 * @fn fibonacci
 * @brief Computes the nth value of the fibonacci series
 *
 * fibonacci(0) = 1
 * fibonacci(1) = 1
 * fibonacci(n) = fibonacci(n-1) + fibonacci(n-2)
 *
 * @param n The rank of fibonacci series to compute
 * @result The nth value of fibonacci series
 * @warning { There is no check on integer overflow }
 */
int fibonacci(int n)
{
    if ( n < 0 ) {
	throw std::invalid_argument("invalid on negative input");
    }
    if ( n == 0 || n == 1 ) {
	return 1;
    }
    else {
	int f_2 = 1, f_1 = 1, f;
	for ( int i = 2; i <= n; i++ ) {
	  f = f_2 + f_1; f_2 = f_1; f_1 = f;
	}
	return f;
    }
}
