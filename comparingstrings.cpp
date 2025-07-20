#include <iostream>
#include <string>

int main() {
    std::string password;

    std::cout << "Enter the password: ";
    std::getline(std::cin, password);

    if (password == "openSesame") {
        std::cout << "Access granted!\n";
    } else {
        std::cout << "Access denied.\n";
    }

    return 0;
}
