#include <stdio.h>

int main(void) {
	char name[] = "Yanis";
	int age = 19;
	float height = 1.78;
	char initial = 'Y';
	printf("+-------------------------------+\n");
	printf("|     FICHE D'IDENTITE          |\n");
	printf("+-------------------------------+\n");
	printf("| Prenom  : %s                |\n", name);
	printf("| Age     : %d                  |\n", age);
	printf("| Taille  : %.2f m              |\n", height);
	printf("| Initiale: %c                   |\n", initial);
	printf("+-------------------------------+\n");
	printf("| Code de sortie : 0 (succes)   |\n");
	printf("+-------------------------------+\n");
	return 0;
}
