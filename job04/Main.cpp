#include <iostream>

int main() {
    int a = 10, b = 20, c = 30;
    int* pA = &a;
    int* pB = &b;
    int* pC = &c;

    std::cout << "Valeurs initiales (via déréférencement) :" << std::endl;
    std::cout << "  a = " << *pA << ", b = " << *pB << ", c = " << *pC << std::endl;

    // Modification via les pointeurs
    *pA = 100;
    *pB = 200;
    *pC = 300;

    std::cout << "Nouvelles valeurs :" << std::endl;
    std::cout << "  a = " << a << ", b = " << b << ", c = " << c << std::endl;

    return 0;
}