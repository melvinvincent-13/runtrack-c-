#include <iostream>
#include <string>

bool estIncluse(const std::string& s1, const std::string& s2) {
    return s2.find(s1) != std::string::npos;
}

int main() {
    std::string s1, s2;

    std::cout << "Entrez la première chaîne (à chercher) : ";
    std::getline(std::cin, s1);
    std::cout << "Entrez la deuxième chaîne (dans laquelle chercher) : ";
    std::getline(std::cin, s2);

    if (estIncluse(s1, s2))
        std::cout << "\"" << s1 << "\" est incluse dans \"" << s2 << "\" : vrai" << std::endl;
    else
        std::cout << "\"" << s1 << "\" n'est pas incluse dans \"" << s2 << "\" : faux" << std::endl;

    return 0;
}