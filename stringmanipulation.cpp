#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string sentence;

    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    std::cout << "\nYou entered: " << sentence << "!";
    std::cout << "\nThe first letter of this sentence is: " << sentence[0];
    
    int length = sentence.length();

    std::cout << "\nThe last letter of this sentence is: " << sentence[length - 1];

    for (char &c : sentence) {
        c = std::toupper(static_cast<unsigned char>(c));
    }
    std::cout << "\nThis is your message in uppercase: " << sentence << std::endl;
    return 0;
}