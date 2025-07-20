#include <iostream>


int main() {
    int numbers[5]; // Array to store 5 integers

    // Get input from the user
    for (int i = 0; i < 5; i++) {
        std::cout << "Enter number " << i + 1 << ": ";
        std::cin >> numbers[i];
    }

    // Print the entered numbers
    std::cout << "\nYou entered: ";
    for (int i = 0; i < 5; i++) {
        std::cout << numbers[i] << " ";
    }

    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }
    std::cout << "\nThe sum of all numbers is: " << sum << std::endl;

    std::cout << std::endl;

    int max = numbers[0];

    for (int i = 1; i < 5; i ++) {
    if (numbers[i] > max) {
        max = numbers[i];
    }
}
std::cout << "The largest number is: " << max << std::endl;

int search;
bool found = false;

std::cout << "Enter a number to search for: ";
std::cin >> search;

for (int i = 0; i < 5; i++) {
    if (numbers[i] == search) {
        found = true;
        break;
    }
}

if (found) {
    std::cout << search << " was found in the array!" << std::endl;
    } else {
    std::cout << search << " was not found in the array." << std::endl;
}
    return 0;
}