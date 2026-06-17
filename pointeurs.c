#include <stdio.h>

// Exercice 5.4 - Fonctions avec pointeurs

// Retourne le min et le max via des pointeurs
void min_max(int tab[], int n, int *pmin, int *pmax) {
    *pmin = tab[0];
    *pmax = tab[0];
    for (int i = 1; i < n; i++) {
        if (tab[i] < *pmin) *pmin = tab[i];
        if (tab[i] > *pmax) *pmax = tab[i];
    }
}

double moyenne(int tab[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += tab[i];
    }
    return (double) total / n;
}

int main(void) {
    int notes[6] = {12, 8, 19, 14, 5, 16};
    int n = 6;
    int min, max;

    min_max(notes, n, &min, &max);

    printf("Minimum : %d\n", min);
    printf("Maximum : %d\n", max);
    printf("Moyenne : %.2f\n", moyenne(notes, n));
    return 0;
}
