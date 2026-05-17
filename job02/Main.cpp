#include <iostream>

void swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int a = 10, b = 42;

    std::cout << "Avant : a = " << a << ", b = " << b << std::endl;
    swap(&a, &b);
    std::cout << "Après : a = " << a << ", b = " << b << std::endl;

    return 0;
}