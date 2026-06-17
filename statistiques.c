#include <stdio.h>

// Exercice 4.3 - Statistiques de notes

int somme(int tab[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += tab[i];
    }
    return total;
}

float moyenne(int tab[], int n) {
    return (float) somme(tab, n) / n;
}

int minimum(int tab[], int n) {
    int min = tab[0];
    for (int i = 1; i < n; i++) {
        if (tab[i] < min) min = tab[i];
    }
    return min;
}

int maximum(int tab[], int n) {
    int max = tab[0];
    for (int i = 1; i < n; i++) {
        if (tab[i] > max) max = tab[i];
    }
    return max;
}

int main(void) {
    int notes[8] = {14, 17, 9, 12, 18, 7, 15, 11};
    int n = 8;

    printf("Somme    : %d\n", somme(notes, n));
    printf("Moyenne  : %.2f\n", moyenne(notes, n));
    printf("Minimum  : %d\n", minimum(notes, n));
    printf("Maximum  : %d\n", maximum(notes, n));
    return 0;
}
