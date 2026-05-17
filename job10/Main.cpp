#include <iostream>
#include <vector>
#include <string>

struct Note {
    std::string nom;
    std::string prenom;
    double      note;
};

void afficherMenu() {
    std::cout << "\nMenu :" << std::endl;
    std::cout << "1. Ajouter une note" << std::endl;
    std::cout << "2. Afficher la liste de notes" << std::endl;
    std::cout << "3. Supprimer une note d'un etudiant" << std::endl;
    std::cout << "4. Afficher la moyenne des notes" << std::endl;
    std::cout << "5. Quitter" << std::endl;
    std::cout << "Choix : ";
}

void ajouterNote(std::vector<Note>& notes) {
    Note n;
    std::cout << "Nom : ";      std::cin >> n.nom;
    std::cout << "Prénom : ";   std::cin >> n.prenom;
    std::cout << "Note : ";     std::cin >> n.note;
    notes.push_back(n);
    std::cout << "Note ajoutée." << std::endl;
}

void afficherNotes(const std::vector<Note>& notes) {
    if (notes.empty()) {
        std::cout << "Aucune note enregistrée." << std::endl;
        return;
    }
    std::cout << "\n--- Liste des notes ---" << std::endl;
    for (size_t i = 0; i < notes.size(); i++) {
        std::cout << i + 1 << ". " << notes[i].prenom << " " << notes[i].nom
                  << " : " << notes[i].note << std::endl;
    }
}

void supprimerNote(std::vector<Note>& notes) {
    if (notes.empty()) {
        std::cout << "Aucune note à supprimer." << std::endl;
        return;
    }
    afficherNotes(notes);
    std::cout << "Numéro à supprimer : ";
    int idx;
    std::cin >> idx;
    if (idx >= 1 && idx <= (int)notes.size()) {
        notes.erase(notes.begin() + idx - 1);
        std::cout << "Note supprimée." << std::endl;
    } else {
        std::cout << "Numéro invalide." << std::endl;
    }
}

void afficherMoyenne(const std::vector<Note>& notes) {
    if (notes.empty()) {
        std::cout << "Aucune note pour calculer la moyenne." << std::endl;
        return;
    }
    double somme = 0;
    for (const Note& n : notes) somme += n.note;
    std::cout << "Moyenne : " << somme / notes.size() << std::endl;
}

int main() {
    std::vector<Note> notes;
    int choix;

    do {
        afficherMenu();
        std::cin >> choix;
        switch (choix) {
            case 1: ajouterNote(notes);    break;
            case 2: afficherNotes(notes);  break;
            case 3: supprimerNote(notes);  break;
            case 4: afficherMoyenne(notes);break;
            case 5: std::cout << "Au revoir !" << std::endl; break;
            default: std::cout << "Choix invalide." << std::endl;
        }
    } while (choix != 5);

    return 0;
}