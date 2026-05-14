#include <iostream>

int main() {
    double note;

    std::cout << "Entrez votre note (0-20) : ";
    std::cin >> note;

    if (note < 0 || note > 20) {
        std::cout << "Note invalide. Elle doit être comprise entre 0 et 20." << std::endl;
    } else if (note > 10) {
        std::cout << "Validé" << std::endl;
    } else {
        std::cout << "Non validé" << std::endl;
    }
    return 0;
}