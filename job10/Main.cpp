#include <iostream>
#include <string>

int main() {
    std::string string1, string2 = "Bonjour";

    std::cout << "Entrez une chaîne : ";
    std::getline(std::cin, string1);

    std::cout << "\nAvant tri :" << std::endl;
    std::cout << "  string1 : \"" << string1 << "\"" << std::endl;
    std::cout << "  string2 : \"" << string2 << "\"" << std::endl;

    // Tri lexicographique : si string1 > string2, on échange
    if (string1 > string2) {
        std::swap(string1, string2);
    }

    std::cout << "\nAprès tri lexicographique :" << std::endl;
    std::cout << "  1er : \"" << string1 << "\"" << std::endl;
    std::cout << "  2ème : \"" << string2 << "\"" << std::endl;

    return 0;
}