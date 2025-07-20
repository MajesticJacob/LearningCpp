#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> names;
    std::string input;

    std::cout << "Enter a name and press enter (type done to finish): \n";

    while (true) {
        std::getline(std::cin, input);
        if (input == "done") break ;
        names.push_back(input);
    }

    std::cout << "\nNames in uppercase: \n";
for (std::string name : names) {
    for (char &c : name) {
        c = std::toupper(static_cast<unsigned char>(c));
    }
    std::cout << name << std::endl;
}

return 0;
}
