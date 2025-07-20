#include <iostream>

int add(int a, int b);

int main() {
    int x;
    int y;

    std::cout << "What's the first number for addition? ";
    std::cin >> x;

    std::cout << "What's the second number for addition? ";
    std::cin >> y;

    int result = add(x, y);

    std::cout << "The sum of " << x << " and " << y << " is " << result << std::endl;

    return 0;
}

int add(int a, int b) {
    return a + b;
}