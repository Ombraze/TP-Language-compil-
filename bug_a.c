#include <stdio.h>
#include <stdlib.h>

// Programme A - VERSION BUGGEE (pour le test avec les sanitizers, ex 2.3)
// Buffer overflow : la condition i <= 5 ecrit dans tab[5] qui n'existe pas.
int main(void) {
    int *tab = (int *) malloc(5 * sizeof(int));
    for (int i = 0; i <= 5; i++) { // Indice suspect !
        tab[i] = i * 10;
    }
    free(tab);
    return 0;
}
