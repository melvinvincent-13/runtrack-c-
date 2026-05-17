#include <iostream>
#include <string>

int compareStrings(const std::string& s1, const std::string& s2) {
    return (s1 == s2) ? 0 : 1;
}

int main() {
    std::string s1, s2;

    std::cout << "Entrez la première chaîne : ";
    std::getline(std::cin, s1);
    std::cout << "Entrez la deuxième chaîne : ";
    std::getline(std::cin, s2);

    int result = compareStrings(s1, s2);
    if (result == 0)
        std::cout << "Les chaînes sont égales (retour : 0)" << std::endl;
    else
        std::cout << "Les chaînes sont différentes (retour : 1)" << std::endl;

    return 0;
}