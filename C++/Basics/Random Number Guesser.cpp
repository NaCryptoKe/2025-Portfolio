/*
    Day Two Practice: Random Number Guesser
    Description: Write a program that generates a random number between 1 and 100 and asks the user to guess it.
*/

#include <iostream>

/*
    * rand() generates a random number between 0 and RAND_MAX, where RAND_MAX is a constant 32767.
    * % 100 generates a random number between 0 and 99.
    * So we add 1 to generate a random number between 1 and 100.
 */

int main()
{
    int number = 0; // Declare and initialize the variable number to 0, which will store the random number
    int guess = 0; // Declare and initialize the variable guess to 0, which will store the user's guesses
    int tries = 0; // Declare and initialize the variable tries to 0, which will store the number of tries the user has taken
    char playAgain = 'y'; // Declare and initialize the variable playAgain to 'y', which will store the user's choice to play again

    while (playAgain == 'y') // Loop to play the game again if the user chooses to
    {
        number = rand() % 100 + 1; // Generate a random number between 1 and 100
        tries = 0; // Reset the number of tries to 0, when the game is played again

        std::cout << "I have a number between 1 and 100.\nCan you guess what it is?\n" ;

        do // Loop to keep asking the user for guesses until they guess the correct number
        {
            std::cout << "Enter your guess: ";
            std::cin >> guess; // Input the user's guesses
            tries++; // Increment the number of tries by 1

            if (guess > number)
            {
                std::cout << "Too high! Try again.\n";
            }
            else if (guess < number)
            {
                std::cout << "Too low! Try again.\n";
            }
            else
            {
                std::cout << "Congratulations! You guessed the number in " << tries << " tries.\n";
            }
        } while (guess != number); // A do while loop to keep asking the user for guesses until they guess the correct number

        std::cout << "Would you like to play again? (y/n): ";
        std::cin >> playAgain; // Input the user's choice to play again 'y' for yes
    }

    return 0;
}