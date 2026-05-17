#include <iostream>
#include <string>

void inverser(char* debut, char* fin) {
    while (debut < fin) {
        char tmp = *debut;
        *debut = *fin;
        *fin   = tmp;
        debut++;
        fin--;
    }
}

int main() {
    std::string input;
    std::cout << "Entrez une chaine de caracteres : ";
    std::cin >> input;

    // Travailler sur un tableau de chars modifiable
    char* str = new char[input.length() + 1];
    std::copy(input.begin(), input.end(), str);
    str[input.length()] = '\0';

    inverser(str, str + input.length() - 1);

    std::cout << "Chaine inversee : " << str << std::endl;

    delete[] str;
    return 0;
}