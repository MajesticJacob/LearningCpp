#include <iostream>
#include <string>
#include <limits>

int main() {
    std::string name;
    int age;
    double height;
    bool printer;
    std::string degree;
    
    std::cout << "What is your name? ";
    std::getline(std::cin, name);

    std::cout << "How old are you? ";
    std::cin >> age;

    std::cout << "What is your height in meters? ";
    std::cin >> height;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "What are you studying at University? ";
    std::getline(std::cin, degree);

    std::cout << "Do you own a 3D Printer? (Answer 1 for yes, 0 for no) ";
    std::cin >> printer;

    std::cout << "\nHello, " << name << "! You are " << age << " years old.\n";
    std::cout << "Your height is " << height << " meters.\n";
    std::cout << "\nYou are studying " << degree;
    if (printer == 1) {
        std::cout << "\nYou own a 3D printer";
    } else {
        std::cout << "\nYou don't own a 3D printer";
}
return 0;
}