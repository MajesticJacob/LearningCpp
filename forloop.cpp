#include <iostream>
using namespace std;

int main() {
    int number;
    int start;
    int ignore;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Give me a number to ignore: ";
    cin >> ignore;

    cout << "Give me a starting number: ";
    cin >> start;

    // Count up using while loop
    int i = start;
    while (i <= number) {
        if (i == ignore) {
            i++;
            continue;
        } else {
        cout << i << " ";
        }
        i++;
    }

    cout << "\n";

    // Count down using for loop
    for (int j = number; j >= start; j--) {
    if (j == ignore) {
        continue;  // skip the ignore number
    }
    cout << j << " ";
}

    return 0;
}