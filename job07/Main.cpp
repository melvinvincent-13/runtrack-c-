#include <iostream>

int main() {
    int a, b;
    std::cout << "Entrez a : ";
    std::cin >> a;
    std::cout << "Entrez b : ";
    std::cin >> b;

    for (int i = a; i <= b; i++) {
        std::cout << i << std::endl;
    }
    return 0;
}