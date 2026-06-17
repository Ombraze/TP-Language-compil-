#include <iostream>
#include <string>

// Exercice 3.4 - Reecriture de fiche_interactive.c en C++
int main() {
    std::string prenom;
    int age;
    float note;

    std::cout << "Entrez votre prenom : ";
    std::cin >> prenom;
    std::cout << "Entrez votre age : ";
    std::cin >> age;
    std::cout << "Entrez votre note moyenne : ";
    std::cin >> note;

    std::cout << "Bonjour " << prenom << ", vous avez " << age
              << " ans et votre note moyenne est de " << note << std::endl;
    return 0;
}
