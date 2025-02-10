/*
    Bro Code: Project assessment one
*/

#include <iostream>
#include <cmath>

int main()
{
    double side1, side2, hypotenuse;

    std::cout << "Enter the length of side 1: ";
    std::cin >> side1;
    std::cout << "Enter the length of side 2: ";
    std::cin >> side2;

    hypotenuse = sqrt(pow(side1, 2) + pow(side2, 2)); // Calculate the hypotenuse using the Pythagorean theorem
    std::cout << "The length of the hypotenuse is: " << hypotenuse << '\n';

    return 0;
}