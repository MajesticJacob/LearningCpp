#include <iostream>
#include <string>

int main() {
    std::string firstName, lastName;

    std::cout << "Enter your first name: ";
    std::getline(std::cin, firstName);

    std::cout << "Enter your last name: ";
    std::getline(std::cin, lastName);

    std::string fullName = firstName + " " + lastName;

    std::cout << "\nYour full name is: " << fullName << std::endl;
    std::cout << "It has " << fullName.length() << " characters (including the space)." << std::endl;

    std::cout << "The first letter of your name is: " << fullName[0] << std::endl;

    return 0;
}
