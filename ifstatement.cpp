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

    int agerange;

if (age < 13) {
    agerange = 0;  // Child
} else if (age >= 13 && age <= 17) {
    agerange = 1;  // Teenager
} else if (age >= 18 && age <= 64) {
    agerange = 2;  // Adult
} else {
    agerange = 3;  // Senior
}

    std::cout << "What is your height in meters? ";
    std::cin >> height;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "What are you studying at University? ";
    std::getline(std::cin, degree);

    std::cout << "Do you own a 3D Printer? (Answer 1 for yes, 0 for no) ";
    std::cin >> printer;

    std::cout << "\nHello, " << name;
    if (agerange == 0) {
    std::cout << "You're a child.\n";
} else if (agerange == 1) {
    std::cout << "You're a teenager.\n";
} else if (agerange == 2) {
    std::cout << "You're an adult.\n";
} else if (agerange == 3) {
    std::cout << "You're a senior citizen.\n";
}
    std::cout << "Your height is " << height << " meters.\n";
    std::cout << "\nYou are studying " << degree;
    if (printer == 1) {
        std::cout << "\nYou own a 3D printer";
    } else {
        std::cout << "\nYou don't own a 3D printer";
}
return 0;
}