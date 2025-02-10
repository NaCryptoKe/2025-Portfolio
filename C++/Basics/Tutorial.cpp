#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t; // Define a type alias for a vector of pairs of strings and integers, a common naming convention is to end with _t

typedef std::string text_t;
using text_t = std::string; // Define a type alias for a string using `using` keyword
namespace first // Declare a namespace called first
{
    int x = 6; // Declare a variable x and assign the value 6 with the namespace first
}
int main()
{
    int x; // Declare a variable x
    x = 5; // Assign the value 5 to x

    std::cout << x << std::endl; // Output the value of x using the standard library std::cout

    int y = 5; // Declare and initialize a variable y with the value 5

    /*Data Types */
    int a = 5; // Integer
    float b = 5.5; // Floating point number
    double c = 5.5; // Double precision floating point number
    char d = 'A'; // Character
    bool e = true; // Boolean

    std::string f = "Hello"; // String

    const double PI = 3.14159; // Constant variable
    double radius = 5.0;
    double circumference = 2 * PI * radius;

    pairlist_t pairlist; // Declare a vector of pairs of strings and integers
    text_t text = "Hello"; // Declare a string using a type alias

    int students = 20;
    students = students + 1; // is the same as students++; and students += 1;
    students = students - 1; // is the same as students--; and students -= 1;
    students = students * 1; // is the same as students *= 2;
    students = students / 3; // is the same as students /= 3;
    int remainder = students % 3; // Modulus operator

    int students = 6 - 5 + 4 * 3 / 2; // Order of operations: Parentheses, Exponents, Multiplication and Division, Addition and Subtraction

    return 0; // Return 0 to indicate that the program has run successfully
}