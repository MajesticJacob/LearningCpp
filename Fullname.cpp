#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;
    double height;
    bool isStudent;

    std::cout << "What is your name? ";
    std::getline(std::cin, name);

    std::cout << "How old are you? ";
    std::cin >> age;

    std::cout << "What is your height in meters? ";
    std::cin >> height;

    std::cout << "Are you a student? (1 for yes, 0 for no) ";
    std::cin >> isStudent;

    std::cout << "\nHello, " << name << "! You are " << age << " years old.\n";
    std::cout << "Your height is " << height << " meters.\n";
    std::cout << "Student? " << std::boolalpha << isStudent << std::endl;

    return 0;
}
