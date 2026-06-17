#include <stdio.h>
#include <stdlib.h>

// Programme B - CORRIGE
// Bug : dangling pointer. creer_tableau retournait l'adresse d'un tableau
//       local (sur la stack) detruit a la fin de la fonction.
// Correction : allouer le tableau sur le heap avec malloc, puis le free
//              dans main.
int* creer_tableau(int n) {
    int *tableau = (int *) malloc(n * sizeof(int)); // sur le heap
    for (int i = 0; i < n; i++) tableau[i] = i;
    return tableau; // adresse valide car le bloc survit a la fonction
}

int main(void) {
    int *t = creer_tableau(5);
    printf("%d\n", t[0]);
    free(t); // ne pas oublier de liberer
    return 0;
}
