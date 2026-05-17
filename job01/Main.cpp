#include <iostream>

int main() {
    int number = 2019;
    int* ptr = &number;

    std::cout << "La valeur de \"number\" est : " << *ptr << std::endl;
    return 0;
}