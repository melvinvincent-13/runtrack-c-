#include <iostream>
#include <string>
#include <cctype>

bool validerHeure(const std::string& heure) {
    // Format attendu : XXhXX (5 caractères)
    if (heure.length() != 5) return false;
    if (!isdigit(heure[0])) return false;
    if (!isdigit(heure[1])) return false;
    if (heure[2] != 'h')    return false;
    if (!isdigit(heure[3])) return false;
    if (!isdigit(heure[4])) return false;

    int heures  = (heure[0] - '0') * 10 + (heure[1] - '0');
    int minutes = (heure[3] - '0') * 10 + (heure[4] - '0');

    return (heures >= 0 && heures <= 23 && minutes >= 0 && minutes <= 59);
}

int main() {
    std::string input;
    std::cout << "Entrez une heure au format XXhXX : ";
    std::cin >> input;

    if (validerHeure(input))
        std::cout << "Format valide." << std::endl;
    else
        std::cout << "Format invalide. Attendu : XXhXX (ex: 08h30)" << std::endl;

    return 0;
}