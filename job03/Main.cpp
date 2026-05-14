#include <iostream>
using namespace std;

// Version originale avec for
void version_for() {
    int i, n, som = 0;
    for (i = 0; i < 4; i++) {
        cout << "donnez un entier : ";
        cin >> n;
        som += n;
    }
    cout << "Somme : " << som << endl;
}

// Version avec while
void version_while() {
    int i = 0, n, som = 0;
    while (i < 4) {
        cout << "donnez un entier : ";
        cin >> n;
        som += n;
        i++;
    }
    cout << "Somme : " << som << endl;
}

// Version avec do...while
void version_do_while() {
    int i = 0, n, som = 0;
    do {
        cout << "donnez un entier : ";
        cin >> n;
        som += n;
        i++;
    } while (i < 4);
    cout << "Somme : " << som << endl;
}

int main() {
    int choix;
    cout << "Choisissez la version (1=for, 2=while, 3=do-while) : ";
    cin >> choix;

    if (choix == 1)      version_for();
    else if (choix == 2) version_while();
    else                 version_do_while();

    return 0;
}