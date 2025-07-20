#include <iostream>

// Declare a function that adds two integers
int add(int a, int b) {
    // TODO: return the sum of a and b
    return a + b;
}

int main() {
    int x = 10;
    int y = 20;
    int sum = add(x, y);

    // TODO: Call the add function and store the result in sum

    std::cout << "The sum of " << x << " and " << y << " is " << sum << std::endl;

    return 0;
}
