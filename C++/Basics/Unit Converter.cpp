/*
    Day One Practice: Unit Converter (miles ↔ kilometers)
*/
#include <iostream>

namespace first // Declare a namespace called first
{
    int x = 6; // Declare a variable x and assign the value 6 with the namespace first
}

int main()
{
    double miles;
    double kilometers;

    std::cout<<"Enter a number of miles: ";
    std::cin>>miles;

    std::cout<<miles<<" miles is equivalent to "<<miles*1.609<<" kilometers."<<std::endl;

    std::cout<<"Enter a number of kilometers: ";
    std::cin>>kilometers;

    std::cout<<kilometers<<" kilometers is equivalent to "<<kilometers/1.609<<" miles."<<std::endl;

    return 0;
    
}