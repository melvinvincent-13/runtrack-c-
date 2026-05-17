#include <iostream>

struct Point {
    int x;
    int y;
};

int main() {
    Point p = {3, 7};
    Point* ptr = &p;

    std::cout << "Point initial : x = " << ptr->x << ", y = " << ptr->y << std::endl;

    // Modification via le pointeur (opérateur ->)
    ptr->x = 15;
    ptr->y = 42;

    std::cout << "Point modifié : x = " << ptr->x << ", y = " << ptr->y << std::endl;

    return 0;
}