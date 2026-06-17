#include <stdio.h>

// Exercice 3.3 - Bibliotheque de fonctions

int minimum(int a, int b) {
    return (a < b) ? a : b;
}

int maximum(int a, int b) {
    return (a > b) ? a : b;
}

int valeur_absolue(int x) {
    return (x < 0) ? -x : x;
}

int est_pair(int x) {
    return (x % 2 == 0) ? 1 : 0;
}

long factorielle(int n) {
    long resultat = 1;
    for (int i = 2; i <= n; i++) {
        resultat *= i;
    }
    return resultat;
}

int main(void) {
    printf("minimum(4, 9) = %d\n", minimum(4, 9));
    printf("maximum(4, 9) = %d\n", maximum(4, 9));
    printf("valeur_absolue(-7) = %d\n", valeur_absolue(-7));
    printf("est_pair(6) = %d\n", est_pair(6));
    printf("est_pair(5) = %d\n", est_pair(5));
    printf("factorielle(5) = %ld\n", factorielle(5));
    return 0;
}
