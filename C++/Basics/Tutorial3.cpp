#include <iostream>
#include <ctime>

int main()
{
    srand(time(0)); // Seed the random number generator with the current time
    int randNum = rand() % 5 + 1; // Generate a random number between 1 and 5

    switch (randNum)
    {
        case 1:
            std::cout << "You rolled a 1!";
            break;
        case 2:
            std::cout << "You rolled a 2!";
            break;
        case 3:
            std::cout << "You rolled a 3!";
            break;
        case 4:
            std::cout << "You rolled a 4!";
            break;
        case 5:
            std::cout << "You rolled a 5!";
            break;
        default:
            break;
    }

    
    return 0;
}