#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;
    int ageRange;

    std::cout << "What is your name? ";
    std::getline(std::cin, name);

    std::cout << "How old are you? ";
    std::cin >> age;

    // TODO: Use an if-else to set ageRange based on age
    // If age < 13, ageRange = 1 (child)
    // Else if age < 20, ageRange = 2 (teen)
    // Else ageRange = 3 (adult)

    if (age < 13) {
        ageRange = 1;
    } else if (age < 20) {
        ageRange = 2;
    } else {
        ageRange = 3;
    }

    // TODO: Print out a message using name and ageRange, for example:
    // "Hello, Jacob! You are a teenager."

    std::cout << "\nHello, " << name << ".";

    if (ageRange == 2) {
        std::cout << "You are a teenager.\n";
    } else if (ageRange == 1) {
        std::cout << "You are a child. \n";
    } else {
        std::cout << "You are an adult. \n";
    }

    return 0;
}
