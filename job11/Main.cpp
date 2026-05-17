#include <iostream>
#include <string>

int main() {
    std::string fruit[] = {"pomme", "banane", "mangue", "fraise", "kiwi"};
    int nbFruits = 5;

    std::cout << "Fruits disponibles :" << std::endl;
    for (int i = 0; i < nbFruits; i++) {
        std::cout << "  " << i + 1 << ". " << fruit[i] << std::endl;
    }

    int nbFavoris;
    std::cout << "\nCombien de fruits favoris avez-vous (max " << nbFruits << ") ? ";
    std::cin >> nbFavoris;

    if (nbFavoris < 1 || nbFavoris > nbFruits) {
        std::cout << "Nombre invalide." << std::endl;
        return 1;
    }

    std::string* favoris = new std::string[nbFavoris];

    std::cout << "Entrez vos " << nbFavoris << " fruits favoris :" << std::endl;
    for (int i = 0; i < nbFavoris; i++) {
        std::cout << "  Favori " << i + 1 << " : ";
        std::cin >> favoris[i];
    }

    std::cout << "\nVos fruits favoris :" << std::endl;
    for (int i = 0; i < nbFavoris; i++) {
        std::cout << "  " << favoris[i] << std::endl;
    }

    delete[] favoris;
    return 0;
}