/*
Write unit tests for a C++ function that checks if a number is even or odd.
*/

#define CATCH_CONFIG_MAIN
#include "../include/catch.hpp"

bool is_even(const int &number)
{
    return (number % 2 == 0);
}

TEST_CASE("is_even() with positive numbers")
{
    SECTION("even numbers")
    {
        int numbers = GENERATE(2, 4, 6, 100);
        REQUIRE(is_even(numbers) == true);
    }

    SECTION("odd numbers")
    {
        int numbers = GENERATE(1, 3, 5, 99);
        REQUIRE(is_even(numbers) == false);
    }
}

TEST_CASE("is_even() with negative numbers")
{
    SECTION("even numbers")
    {
        int numbers = GENERATE(-2, -4, -6, -100);
        REQUIRE(is_even(numbers) == true);
    }

    SECTION("odd numbers")
    {
        int numbers = GENERATE(-1, -3, -5, -99);
        REQUIRE(is_even(numbers) == false);
    }
}

TEST_CASE("is_even() with number zero")
{
    REQUIRE(is_even(0) == true);
}
