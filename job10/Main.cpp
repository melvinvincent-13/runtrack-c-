#include <iostream>
#include <cmath>

int main() {
    double x;

    do {
        std::cout << "donnez un nombre positif : ";
        std::cin >> x;

        if (x < 0)
            std::cout << "svp positif" << std::endl;
        else if (x != 0)
            std::cout << "sa racine carrée est : " << sqrt(x) << std::endl;

    } while (x != 0);

    return 0;
}