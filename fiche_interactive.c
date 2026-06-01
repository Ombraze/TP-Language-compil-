#include <stdio.h>
int main(void) {
    char prenom[20];
    int age;
    float note;
    printf("Entrez votre prenom : ");
    scanf("%s", prenom);
    printf("Entrez votre age : ");
    scanf("%d", &age);
    printf("Entrez votre note moyenne : ");
    scanf("%f", &note);
    printf("Bonjour %s, vous avez %d ans et votre note moyenne est de %.2f\n", prenom, age, note);
return 0;
}
