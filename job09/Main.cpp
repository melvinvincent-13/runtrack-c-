#include <iostream>

int main() {
    int a, b, n;

    std::cout << "Entrez a : ";
    std::cin >> a;
    std::cout << "Entrez b (b > a) : ";
    std::cin >> b;
    std::cout << "Entrez un entier : ";
    std::cin >> n;

    if (n >= a && n <= b)
        std::cout << "GAGNE" << std::endl;
    else
        std::cout << "PERDU" << std::endl;

    return 0;
}