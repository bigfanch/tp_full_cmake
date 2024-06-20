/** @file
 */

#include <string>
#include "palindrome.h"

/**
 * @brief checks if a string is a palindrome
 * @param str a reference to the C++ string to check
 * @return a boolean value true if the string is a palidrome
 */

bool palindrome(const std::string & str)
{
    int l = str.length();
    for ( int n = 0; n < l / 2; n++ ) {
	if ( str[n] != str[l - n - 1] ) {
	   return false;
        }
    }
    return true;
}

