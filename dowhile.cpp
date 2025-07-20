#include <iostream>

int main() {
    int count = 1;

    std::cout << "While loop output: ";
    while (count <= 5) {
        std::cout << count << " ";
        count++;
    }
    std::cout << std::endl;

    count = 1;
    std::cout << "Do-while loop output: ";
    do {
        std::cout << count << " ";
        count++;
    } while (count <= 5);
    std::cout << std::endl;

    return 0;
}
