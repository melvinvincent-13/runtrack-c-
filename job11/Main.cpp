#include <iostream>

int main() {
    int n;
    std::cout << "Entrez un entier positif : ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "La factorielle n'est pas définie pour les négatifs." << std::endl;
        return 1;
    }

    
    unsigned long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }

    std::cout << n << "! = " << result << std::endl;
    return 0;
}