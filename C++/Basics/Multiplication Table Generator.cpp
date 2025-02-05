/*
    Day four Practice: Multiplication Table Generator
    Description: Write a program that takes a number as input and generates a multiplication table for that number.
 */

#include <iostream>

int main()
{
    int max = 0;
    std::cout << "Enter the maximum number: ";
    std::cin >> max;

    for(int i = 1; i<=max; i++)
    {
        for(int j=1; j<=max; j++)
        {
            std::cout << i*j << "\t";
        }
        std::cout << '\n';
    }

    return 0;
}