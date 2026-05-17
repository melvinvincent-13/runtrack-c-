#include <iostream>

int main() {
    int T[10];
    int count = 0;

    std::cout << "Entrez 10 entiers :" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << "T[" << i << "] = ";
        std::cin >> T[i];
    }

    for (int i = 0; i < 10; i++) {
        if (T[i] >= 5) count++;
    }

    std::cout << "Nombre d'entiers >= 5 : " << count << std::endl;
    return 0;
}