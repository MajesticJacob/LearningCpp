#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers; // Declare an empty vector of integers

    // TODO: Add 5 numbers to the vector using push_back()

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);
    numbers.push_back(50);

    // TODO: Print out all the numbers in the vector using a for loop

    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // TODO: Remove the last number from the vector

    numbers.pop_back();

    // TODO: Print the size of the vector after removal

    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
