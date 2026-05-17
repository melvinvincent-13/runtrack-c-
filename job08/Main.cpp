#include <iostream>
#include <string>

// C++ est typé statiquement, on utilise une struct pour grouper les données
struct Element {
    int         entier;
    std::string texte1;
    double      reel;
    std::string texte2;
};

int main() {
    Element tab = {2019, "Le roi Michel", 3.14, "Etudiants"};

    std::cout << "Adresses et valeurs :" << std::endl;
    std::cout << "  entier   : valeur = " << tab.entier
              << " | adresse = " << &tab.entier << std::endl;
    std::cout << "  texte1   : valeur = \"" << tab.texte1
              << "\" | adresse = " << (void*)&tab.texte1 << std::endl;
    std::cout << "  reel     : valeur = " << tab.reel
              << " | adresse = " << &tab.reel << std::endl;
    std::cout << "  texte2   : valeur = \"" << tab.texte2
              << "\" | adresse = " << (void*)&tab.texte2 << std::endl;

    return 0;
}