/*
    Day five Practice: Sum of Numbers Calculator
    Description: Write a program that takes a number as input and generates a sum of numbers.
 */
#include <iostream>

int main()
{
    int sum = 0;

    int num_count = 0;
    std::cout << "Enter the number of numbers you want to sum: ";
    std::cin >> num_count;

    for(int i = 0; i<num_count; i++)
    {
        int num = 0;
        std::cout << "Enter number " << i+1 << ": ";
        std::cin >> num;
        sum += num;
    }

    std::cout << "The sum of the numbers is: " << sum << '\n';

    return 0;
}