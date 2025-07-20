#include <iostream>

int main() {
    int age = 26;
    double height = 1.85;
    char grade = 'A';
    bool is_student = true;
    std::string name = "Jacob";

    std::cout << name << " is " << age << " years old." << std::endl;
    std::cout << "Height: " << height << " meters." << std::endl;
    std::cout << "Grade: " << grade << std::endl;
    std::cout << "Student? " << is_student << std::endl;

    return 0;
}