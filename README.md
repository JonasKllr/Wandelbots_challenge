# Wandelbots initial challenge

1. Design a simple RESTful API endpoint for starting a robotic arm at a specific position. Provide the OpenAPI specification for this endpoint.

2. Write a C++ program that creates two threads, that insert the numbers 1..100 sorted into a single container. The work shall be divided between the two threads.

3. Write unit tests for a C++ function that checks if a number is even or odd.

4. Write a C++ function that takes a string as input and outputs the reversed string. Additionally, check if the reversed string is a palindrome (i.e., it reads the same backward as forward).

5. Write a C++ function that prints the numbers from 1 to 100. But for multiples of three, print "Fizz" instead of the number and for the multiples of five, print "Buzz". For numbers which are multiples of both three and five, print "FizzBuzz". Additionally, if the number is a prime number, print "Prime" instead.

## Compilation of `.cpp` files
All `.cpp` files can be compiled with GCC (I used version `13.3.0`).
E.g.:
```
g++ 2.cpp
```

## Task 3 specifics

Run all tests by executing the binary:
```
./a.out
```

Run specific tests by providing their name:
```
./a.out "TEST_NAME"
```
e.g.: `./a.out "is_even() with negative numbers"`.