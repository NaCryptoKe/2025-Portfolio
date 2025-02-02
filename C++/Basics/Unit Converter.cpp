/*
    Day One Practice: Unit Converter (miles ↔ kilometers)
    Description: Write a program that converts miles to kilometers and kilometers to miles.
*/
#include <iostream>

int main()
{
    double miles; // Declare a variable miles of type double
    double kilometers; // Declare a variable kilometers of type double

    std::cout<<"Enter a number of miles: "; // Output the message to enter a number of miles
    std::cin>>miles; // Input the number of miles

    std::cout<<miles<<" miles is equivalent to "<<miles*1.609<<" kilometers."<<std::endl; // Output the equivalent number of kilometers

    std::cout<<"Enter a number of kilometers: "; // Output the message to enter a number of kilometers
    std::cin>>kilometers; // Input the number of kilometers

    std::cout<<kilometers<<" kilometers is equivalent to "<<kilometers/1.609<<" miles."<<std::endl; // Output the equivalent number of miles

    return 0; // Return 0 to indicate that the program has run successfully
    
}