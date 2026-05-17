#include <iostream>

int main() {
    int tab[] = {10, 20, 30, 40, 50};
    int taille = sizeof(tab) / sizeof(tab[0]);

    std::cout << "Tableau statique d'entiers :" << std::endl;
    for (int i = 0; i < taille; i++) {
        std::cout << "  tab[" << i << "] : valeur = " << tab[i]
                  << " | adresse = " << &tab[i] << std::endl;
    }

    return 0;
}