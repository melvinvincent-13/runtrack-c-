#include <iostream>

int main() {
    int n;
    std::cout << "Entrez le nombre de fois à afficher (différent de 0) : ";
    std::cin >> n;

    while (n != 0) {
        std::cout << "Hello World" << std::endl;
        n--;
    }
    return 0;
}