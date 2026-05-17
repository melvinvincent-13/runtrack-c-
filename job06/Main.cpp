#include <iostream>
#include <string>

int main() {
    int         entier    = 17;
    float       flottant  = 3.14f;
    double      reel      = 123.345;
    std::string caractere = "La Plateforme";

    std::cout << "Variable 'entier'    : valeur = " << entier
              << "  | adresse = " << &entier << std::endl;

    std::cout << "Variable 'flottant'  : valeur = " << flottant
              << "  | adresse = " << &flottant << std::endl;

    std::cout << "Variable 'reel'      : valeur = " << reel
              << "  | adresse = " << &reel << std::endl;

    // Pour string, on affiche l'adresse de l'objet
    std::cout << "Variable 'caractere' : valeur = \"" << caractere
              << "\"  | adresse = " << (void*)&caractere << std::endl;

    return 0;
}