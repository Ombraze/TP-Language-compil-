#include <stdio.h>
#include <stdlib.h>

// Programme A - CORRIGE
// Bug : buffer overflow, la boucle allait jusqu'a i <= 5 (donc tab[5])
//       alors que le tableau n'a que 5 cases valides (indices 0 a 4).
// Correction : utiliser i < 5.
int main(void) {
    int *tab = (int *) malloc(5 * sizeof(int));
    if (tab == NULL) return 1;

    for (int i = 0; i < 5; i++) { // i < 5 au lieu de i <= 5
        tab[i] = i * 10;
    }

    for (int i = 0; i < 5; i++) {
        printf("tab[%d] = %d\n", i, tab[i]);
    }

    free(tab);
    return 0;
}
