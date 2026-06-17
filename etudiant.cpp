#include <iostream>
#include <string>

// Exercice 4.4 - Classe Etudiant
class Etudiant {
private:
    std::string nom;
    int age;
    double moyenne;
    double sommeNotes;
    int nbNotes;

public:
    // Constructeur avec liste d'initialisation
    Etudiant(std::string n, int a, double m)
        : nom(n), age(a), moyenne(m), sommeNotes(m), nbNotes(1) {}

    // Constructeur par defaut (pratique pour un tableau)
    Etudiant() : nom(""), age(0), moyenne(0), sommeNotes(0), nbNotes(0) {}

    void ajouterNote(double note) {
        sommeNotes += note;
        nbNotes++;
        moyenne = sommeNotes / nbNotes; // recalcule la moyenne
    }

    bool estMajeur() const {
        return age >= 18;
    }

    void afficher() const {
        std::cout << nom << " | " << age << " ans | moyenne : "
                  << moyenne << " | " << (estMajeur() ? "majeur" : "mineur")
                  << std::endl;
    }

    std::string getNom() const { return nom; }
    double getMoyenne() const { return moyenne; }
};

int main() {
    const int N = 5;
    Etudiant promo[N];

    // Saisie des infos de chaque etudiant
    for (int i = 0; i < N; i++) {
        std::string nom;
        int age;
        double moyenne;
        std::cout << "--- Etudiant " << (i + 1) << " ---" << std::endl;
        std::cout << "Nom : ";
        std::cin >> nom;
        std::cout << "Age : ";
        std::cin >> age;
        std::cout << "Moyenne : ";
        std::cin >> moyenne;
        promo[i] = Etudiant(nom, age, moyenne);
    }

    // Affichage de tous les etudiants
    std::cout << "\n=== Liste des etudiants ===" << std::endl;
    for (int i = 0; i < N; i++) {
        promo[i].afficher();
    }

    // Moyenne de la promotion
    double total = 0;
    for (int i = 0; i < N; i++) {
        total += promo[i].getMoyenne();
    }
    std::cout << "\nMoyenne de la promotion : " << total / N << std::endl;

    // Meilleure moyenne
    int meilleur = 0;
    for (int i = 1; i < N; i++) {
        if (promo[i].getMoyenne() > promo[meilleur].getMoyenne()) {
            meilleur = i;
        }
    }
    std::cout << "Meilleure moyenne : " << promo[meilleur].getNom()
              << " (" << promo[meilleur].getMoyenne() << ")" << std::endl;

    return 0;
}
