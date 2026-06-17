#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Programme C - CORRIGE
// Bug : buffer overflow sur chaine. On allouait 5 octets alors que
//       "Alexandre" fait 9 caracteres + le '\0' final = 10 octets.
// Correction : allouer assez de place (strlen + 1).
int main(void) {
    const char *texte = "Alexandre";
    char *nom = (char *) malloc((strlen(texte) + 1) * sizeof(char));
    if (nom == NULL) return 1;

    strcpy(nom, texte);
    printf("%s\n", nom);
    free(nom);
    return 0;
}
