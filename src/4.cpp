/*
Write a C++ function that takes a string as input and outputs the reversed string.
Additionally, check if the reversed string is a palindrome (i.e., it reads the same backward as forward).
*/

#include <iostream>
#include <string>
#include <algorithm>

void reverse_string(std::string &word)
{
    std::reverse(word.begin(), word.end());
}

bool is_palindrome(const std::string &word)
{
    std::string temp_word = word;
    reverse_string(temp_word);
    return (word == temp_word);
}

int main()
{
    std::string word{};
    std::cout << "Enter word: " << std::endl;
    std::cin >> word;

    reverse_string(word);
    std::cout << "Word in reverse: " << "\n"
              << word << std::endl;

    if (is_palindrome(word))
    {
        std::cout << "The word is a palindrome" << std::endl;
    }
    else
    {
        std::cout << "The word is not a palindrome" << std::endl;
    }
    
    return 0;
}