#include <stdio.h>
int main(void) {
double a, b, resultat;
char op;

printf("Calculatrice C\n");
printf("Operande 1 : ");
scanf("%lf", &a);

printf("Operateur (+ - * /) : ");
scanf(" %c", &op); 

printf("Operande 2 : ");
scanf("%lf", &b);

if (op == '+') {
    resultat = a + b;
} else if (op == '-') {
    resultat = a - b;
} else if (op == '*') {
    resultat = a * b;
} else if (op == '/') {
    if (b == 0) {
        printf("Erreur : division par zero.\n");
        return 1;
    }
    resultat = a / b;
} else {
    printf("Erreur : operateur invalide.\n");
    return 1;
}

printf("Resultat : %.2f\n", resultat);
return 0;
}