#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Partie 6 - Mini-projet : devine le nombre

// Encapsule la logique du jeu, retourne le nombre de tentatives
int jouer(int secret) {
    int essai;
    int tentatives = 0;

    do {
        printf("Ton essai : ");
        scanf("%d", &essai);
        tentatives++;

        if (essai > secret) {
            printf("Trop grand !\n");
        } else if (essai < secret) {
            printf("Trop petit !\n");
        } else {
            printf("Bravo ! Trouve en %d tentatives.\n", tentatives);
        }
    } while (essai != secret);

    return tentatives;
}

int main(void) {
    srand(time(NULL));
    int secret = rand() % 100 + 1;

    printf("=== Devine le nombre (1-100) ===\n");
    jouer(secret);

    return 0;
}
