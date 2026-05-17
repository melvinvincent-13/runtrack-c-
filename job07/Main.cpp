#include <iostream>

int main() {
    int T[10];

    std::cout << "Entrez 10 entiers :" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << "T[" << i << "] = ";
        std::cin >> T[i];
    }

    int indexMax = 0;
    for (int i = 1; i < 10; i++) {
        if (T[i] > T[indexMax]) indexMax = i;
    }

    std::cout << "L'indice du plus grand élément est : " << indexMax
              << " (valeur : " << T[indexMax] << ")" << std::endl;
    return 0;
}