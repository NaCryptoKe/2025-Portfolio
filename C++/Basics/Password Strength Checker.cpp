#include <iostream>

bool hasCapital(std::string password) {
    for (int i = 0; i < password.length(); i++) {
        if (isupper(password[i])) { // check if the character is an uppercase letter
            return true;
        }
    }
    return false;
}

bool hasSmall(std::string password) {
    for (int i = 0; i < password.length(); i++) {
        if (islower(password[i])) { // check if the character is a lowercase letter
            return true;
        }
    }
    return false;
}

bool hasDigit(std::string password) {
    for (int i = 0; i < password.length(); i++) {
        if (isdigit(password[i])) { // check if the character is a digit
            return true;
        }
    }
    return false;
}

bool hasSpecial(std::string password) {
    for (int i = 0; i < password.length(); i++) {
        if (!isalnum(password[i])) { // check if the character is not alphanumeric
            return true;
        }
    }
    return false;
}

int passwordStrength(std::string password) {
    int strength = 0;

    if (password.length() >= 8) {
        strength++;
    }

    if (hasCapital(password)) {
        strength++;
    }

    if (hasSmall(password)) {
        strength++;
    }

    if (hasDigit(password)) {
        strength++;
    }

    if (hasSpecial(password)) {
        strength++;
    }

    return strength;
}

int main()
{
    std::string password;
    std::cout << "Enter your password: ";
    std::cin >> password;

    int strength = passwordStrength(password);

    std::cout << "Password strength: " << strength << "/5";

    return 0;
}