/*
Write a C++ program that creates two threads, that insert the numbers 1..100 sorted into a single container.
The work shall be divided between the two threads.
*/

#include <iostream>
#include <thread>
#include <array>

void insert_numbers(const int start, std::array<int, 100> &container)
{
    for (int i = start; i <= 100; i += 2)
    {
        container[i - 1] = i;
    }
}

int main()
{
    std::array<int, 100> container{};
    std::thread thread_1(insert_numbers, 1, std::ref(container));
    std::thread thread_2(insert_numbers, 2, std::ref(container));

    thread_1.join();
    thread_2.join();

    for (int i = 0; i < container.size(); i++)
    {
        std::cout << container[i] << std::endl;
    }

    return 0;
}
