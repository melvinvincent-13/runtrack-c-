#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout << "Entrez une chaîne de caractères : ";
    std::getline(std::cin, input);

    
    int taille = input.length();
    char tab[taille + 1];

    for (int i = 0; i < taille; i++) {
        tab[i] = input[i];
    }
    tab[taille] = '\0';

    std::cout << "Contenu du tableau tab : ";
    for (int i = 0; tab[i] != '\0'; i++) {
        std::cout << tab[i];
    }
    std::cout << std::endl;

    return 0;
}