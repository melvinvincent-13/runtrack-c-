#include <iostream>

int main() {
    double a, b;
    char op;

    std::cout << "Entrez le calcul (ex: 3 + 5) : ";
    std::cin >> a >> op >> b;

    switch (op) {
        case '+':
            std::cout << a << " + " << b << " = " << a + b << std::endl;
            break;
        case '-':
            std::cout << a << " - " << b << " = " << a - b << std::endl;
            break;
        case '*':
            std::cout << a << " * " << b << " = " << a * b << std::endl;
            break;
        case '/':
            if (b == 0)
                std::cout << "Erreur : division par zéro." << std::endl;
            else
                std::cout << a << " / " << b << " = " << a / b << std::endl;
            break;
        default:
            std::cout << "Opérateur inconnu : " << op << std::endl;
    }
    return 0;
}