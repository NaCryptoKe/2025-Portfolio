/*
    Day six: Prime Number Checker
    Description: Write a program that takes a number as input and checks if it is a prime number.
*/

#include <iostream>

int main()
{
    int primeNum = 0;

    std::cout << "Enter a number to check if it is a prime number: ";
    std::cin >> primeNum;

    int count = 0;

    if (primeNum == 0 || primeNum == 1)
    {
        std::cout << primeNum << " is not a prime number.\n";
    }
    else
    {
        for (int i = 2; i <= primeNum / 2; i++)
        {
            if (primeNum % i == 0)
            {
                count++;
                break;
            }
        }

        if (count == 0)
        {
            std::cout << primeNum << " is a prime number.\n";
        }
        else
        {
            std::cout << primeNum << " is not a prime number.\n";
        }
    }

    return 0;
}