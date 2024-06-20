#pragma once

/** @file
 *
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
extern int fibonacci(int n);
