#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string str = "vive  michel !";

    for (char& c : str) {
        c = toupper(c);
    }

    std::cout << str << std::endl;
    return 0;
}