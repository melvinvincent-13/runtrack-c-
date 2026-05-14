#include <iostream>

int main() {
    int n;
    std::cout << "Entrez n : ";
    std::cin >> n;

    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    std::cout << "Somme des " << n << " premiers termes de la série harmonique : " << sum << std::endl;
    return 0;
}