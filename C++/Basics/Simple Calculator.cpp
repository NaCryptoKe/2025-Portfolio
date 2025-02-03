/*
    Day Three Practice: Simple Calculator
    Description: Write a program that takes two numbers and an operator as input and performs the operation on the numbers using swith statement.
 */

#include <iostream>

int main()
{
    double num1 = 0.0;
    double num2 = 0.0;
    char op = ' ';
    double result = 0.0;

    std::string choice = "y";
    do
    {
        std::cout << "Enter the first number: ";
        std::cin >> num1;

        std::cout << "Enter the operator (+, -, *, /, %): ";
        std::cin >> op;

        std::cout << "Enter the second number: ";
        std::cin >> num2;

        switch (op)
        {
            case ' + ':
                result = num1 + num2;
                break;
            case ' - ': 
                result = num1 - num2;
                break;
            case ' * ':
                result = num1 * num2;
                break;
            case ' / ':
                result = num1 / num2;
                break;
            case ' % ':
                result = (int)num1 % (int)num2;
                break;
            default:
                std::cout << "Invalid operator!";
                break;
        }

        std::cout << "Result: " << result << std::endl;

        std::cout << "Do you want to perform another operation? (y/n): ";
        std::cin >> choice;
    }while(choice == "y");

    return 0;
}