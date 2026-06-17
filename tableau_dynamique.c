#include <stdio.h>
#include <stdlib.h>

// Exercice 1.5 - Tableau dynamique
int main(void) {
    int n;
    printf("Combien d'entiers voulez-vous stocker ? ");
    scanf("%d", &n);

    // Allocation sur le heap
    int *tab = (int *) malloc(n * sizeof(int));
    if (tab == NULL) {
        printf("Echec d'allocation\n");
        return 1;
    }

    // Saisie
    for (int i = 0; i < n; i++) {
        printf("Valeur %d : ", i + 1);
        scanf("%d", &tab[i]);
    }

    // Affichage
    printf("Valeurs saisies : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    // Somme et moyenne
    int somme = 0;
    for (int i = 0; i < n; i++) {
        somme += tab[i];
    }
    printf("Somme   : %d\n", somme);
    printf("Moyenne : %.2f\n", (float) somme / n);

    // Liberation
    free(tab);
    tab = NULL;
    return 0;
}
