# TP-Language-compil- Partie 3 (Structures de controle, fonctions et pointeurs)

Exercice 1.3 (convertisseur de notes) -> voir #notes.c

Le programme demande une note sur 20, affiche la mention (Tres bien, Bien, Assez bien, Passable, Insuffisant), dit "Admis" si >= 10 sinon "Refuse", et gere les notes invalides (< 0 ou > 20).

Exercice 2.3 (table de multiplication) -> voir #table.c

Boucle do...while qui redemande un nombre tant que l'utilisateur ne tape pas 0, et affiche la table de 1 a 10.

Exercice 3.3 (bibliotheque de fonctions) -> voir #fonctions.c

J'ai ecrit minimum, maximum, valeur_absolue, est_pair et factorielle (iteratif avec une boucle), puis je teste chaque fonction dans main avec printf.

Exercice 4.3 (statistiques de notes) -> voir #statistiques.c

Tableau de 8 notes en dur. J'utilise une fonction separee pour la somme, la moyenne, le minimum et le maximum.

Exercice 5.4 (fonctions avec pointeurs) -> voir #pointeurs.c

min_max(int tab[], int n, int *pmin, int *pmax) trouve le min et le max et les "retourne" via des pointeurs (car en C une fonction ne peut retourner qu'une seule valeur).
moyenne(int tab[], int n) calcule la moyenne. Je teste avec un tableau de 6 notes dans main.

Partie 6 -- Mini-projet : devine le nombre -> voir #devine.c

L'ordinateur tire un nombre entre 1 et 100 avec srand(time(NULL)) et rand() % 100 + 1. La logique du jeu est dans la fonction int jouer(int secret) qui boucle (trop petit / trop grand), compte les tentatives et les retourne.

Pour aller plus loin :
- La version recursive de factorielle est plus lisible (elle colle a la definition n! = n * (n-1)!), mais la version iterative est plus efficace (pas d'empilement d'appels de fonction).
