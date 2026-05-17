#include <iostream>
#include <string>

bool estVoyelle(char c) {
    std::string voyelles = "aeiouAEIOU";
    return voyelles.find(c) != std::string::npos;
}

int main() {
    std::string str = "vive le roi Michel !";
    std::string result = "";

    for (char c : str) {
        if (!estVoyelle(c)) {
            result += c;
        }
    }

    std::cout << result << std::endl;
    return 0;
}