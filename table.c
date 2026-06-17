#include <stdio.h>

// Exercice 2.3 - Table de multiplication
int main(void) {
    int n;
    do {
        printf("Nombre (0 pour quitter) : ");
        scanf("%d", &n);

        if (n != 0) {
            for (int i = 1; i <= 10; i++) {
                printf("%d x %d = %d\n", n, i, n * i);
            }
        }
    } while (n != 0);

    printf("Au revoir !\n");
    return 0;
}
