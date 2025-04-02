/*Write a C++ function that prints the numbers from 1 to 100.
But for multiples of three, print "Fizz" instead of the number and for the multiples of five, print "Buzz".
For numbers which are multiples of both three and five, print "FizzBuzz".
Additionally, if the number is a prime number, print "Prime" instead.*/

#include <iostream>

bool is_prime(const int &number)
{
    if (number < 2)
    {
        return false;
    }

    for (int i = 2; i <= number / 2; ++i)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool is_multiple_of_three(const int &number)
{
    return (number % 3 == 0);
}

bool is_multiple_of_five(const int &number)
{
    return (number % 5 == 0);
}

void print_numbers()
{
    int max_number = 100;
    for (int i = 1; i <= max_number; i++)
    {
        if (is_prime(i))
        {
            std::cout << "Prime" << std::endl;
        }
        else if (is_multiple_of_three(i) and is_multiple_of_five(i))
        {
            std::cout << "FizzBuzz" << std::endl;
        }
        else if (is_multiple_of_three(i))
        {
            std::cout << "Fizz" << std::endl;
        }
        else if (is_multiple_of_five(i))
        {
            std::cout << "Buzz" << std::endl;
        }
        else
        {
            std::cout << i << std::endl;
        }
    }
}

int main()
{
    print_numbers();
    return 0;
}