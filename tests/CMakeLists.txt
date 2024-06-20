add_executable(test_factorial test_factorial.cpp)
target_link_libraries(test_factorial gadgets)
add_test(NAME FactorialTest COMMAND test_factorial)

add_executable(test_fibonacci test_fibonacci.cpp)
target_link_libraries(test_fibonacci gadgets)
add_test(NAME FibonacciTest COMMAND test_fibonacci)

add_executable(test_palindrome test_palindrome.cpp)
target_link_libraries(test_palindrome gadgets)
add_test(NAME PalindromeTest COMMAND test_palindrome)

add_executable(test_prime test_prime.cpp)
target_link_libraries(test_prime gadgets)
add_test(NAME PrimeTest COMMAND test_prime)
