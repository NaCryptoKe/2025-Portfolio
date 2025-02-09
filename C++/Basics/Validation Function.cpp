/*
    Day seven: Validation Function
    Description: Write a program that takes a number as input and checks if it is a number.
*/

#include <iostream>

bool isValidNumber(std::string input)
{
    for(int i = 0; i < input.length(); i++)
    {
        if(!isdigit(input[i])) // isdigit() checks if the character is a digit, meaning it is a number
        {
            return false;
        }
    }
}

int main()
{
    std::cout << "Enter a number to check if it is a number: ";
    std::string input;
    std::cin >> input;

    if (isValidNumber(input))
    {
        std::cout << input << " is a valid number.\n";
    }
    else
    {
        std::cout << input << " is not a valid number.\n";
    }
    return 0;
}