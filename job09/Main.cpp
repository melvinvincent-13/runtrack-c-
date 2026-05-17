#include <iostream>

int main() {
    int n;
    std::cout << "Combien d'entiers voulez-vous saisir ? ";
    std::cin >> n;

    int* tab = new int[n];

    for (int i = 0; i < n; i++) {
        std::cout << "tab[" << i << "] = ";
        std::cin >> tab[i];
    }

    std::cout << "Contenu du tableau : ";
    for (int i = 0; i < n; i++) {
        std::cout << tab[i];
        if (i < n - 1) std::cout << ", ";
    }
    std::cout << std::endl;

    delete[] tab;
    return 0;
}