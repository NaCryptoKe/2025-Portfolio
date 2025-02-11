#include <iostream>

int main()
{
    int row, column;

    std::cout << "How many rows?: ";
    std::cin >> row;

    std::cout << "How many columns?: ";
    std::cin >> column;

    for (int i = 1; i <= row; i++)// this will iterate the rows of the rectangle
    {
        for (int j = 1; j <= column; j++) // this will iterate the columns of the rectangle
        {
            std::cout << "*"; // a random symbol to represent the rectangle
        }
        std::cout << std::endl;
    }

    return 0;
}