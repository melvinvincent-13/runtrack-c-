#include <iostream>

int main() {
    int a, b;
    std::cout << "Entrez a : ";
    std::cin >> a;
    std::cout << "Entrez b : ";
    std::cin >> b;

    int i = a;
    while (i <= b) {
        std::cout << i << std::endl;
        i++;
    }
    return 0;
}