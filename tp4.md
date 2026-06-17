# TP-Language-compil- Partie 4 (Gestion memoire et introduction au C++)

Exercice 1.2 (variables sur la stack)

1) Oui, les adresses de a, b et c sont consecutives. La difference entre elles est de 4 octets, ce qui correspond exactement a la taille d'un int (sizeof(int) = 4).

2) Sur ma machine (x86-64) la stack grandit vers le bas, c'est-a-dire vers les adresses memoire plus petites : la variable declaree ensuite a une adresse plus basse que la precedente.

3) Une fois la fonction afficher terminee, la variable a est detruite automatiquement (elle vivait sur la pile). Sa zone memoire est liberee et peut etre reutilisee par le prochain appel de fonction. C'est pour ca que les deux appels de afficher() affichent les memes adresses.

Exercice 1.5 (tableau dynamique) -> voir #tableau_dynamique.c

Le programme demande n, alloue un tableau de n entiers sur le heap avec malloc (en verifiant NULL), fait saisir chaque valeur, affiche tout, calcule la somme et la moyenne, puis libere la memoire avec free.

Exercice 2.2 (trouver les bugs) -> voir #programme_a.c, #programme_b.c, #programme_c.c

Programme A -- Buffer overflow :
Bug : la boucle va jusqu'a i <= 5, donc elle ecrit dans tab[5] alors que le tableau de 5 cases n'a que les indices 0 a 4.
Correction : remplacer i <= 5 par i < 5.

Programme B -- Dangling pointer :
Bug : creer_tableau retourne l'adresse d'un tableau local (sur la stack) qui est detruit des que la fonction se termine. Le pointeur renvoye pointe vers une zone invalide.
Correction : allouer le tableau sur le heap avec malloc dans la fonction, et faire le free dans main.

Programme C -- Buffer overflow sur chaine :
Bug : on alloue seulement 5 octets alors que "Alexandre" fait 9 caracteres + le '\0' final = 10 octets. strcpy ecrit donc au-dela de la zone allouee.
Correction : allouer (strlen(texte) + 1) octets.

Exercice 2.3 (detecter avec les sanitizers) -> voir #bug_a.c

J'ai garde la version buggee dans bug_a.c pour la tester. Commande :
"gcc -fsanitize=address -g bug_a.c -o bug_a" puis "./bug_a"

AddressSanitizer detecte une erreur "heap-buffer-overflow" au moment ou on ecrit dans tab[5] : il signale un acces "WRITE of size 4" juste apres le bloc de 20 octets alloue par malloc, et pointe la ligne fautive (tab[i] = i * 10). Ca confirme que l'ecriture deborde du tableau.
(Note : sur cette installation MinGW la lib asan n'est pas fournie, donc le sanitizer ne se lie pas localement ; le diagnostic ci-dessus est celui qu'on obtient avec un GCC qui inclut AddressSanitizer, par ex. sous Linux.)

Exercice 3.4 (reecrire fiche_interactive.c en C++) -> voir #fiche.cpp

J'ai remplace char[] par std::string et printf/scanf par std::cout/std::cin.
Compilation : "g++ -Wall -std=c++17 fiche.cpp -o fiche".

Exercice 4.4 (classe Etudiant) -> voir #etudiant.cpp

Classe Etudiant avec attributs prives (nom, age, moyenne), constructeur avec liste d'initialisation, methodes ajouterNote (recalcule la moyenne), estMajeur (age >= 18), afficher, et les getters getNom / getMoyenne.
Dans main : un tableau de 5 Etudiant, saisie au clavier, affichage de tous, calcul de la moyenne de la promotion et recherche de l'etudiant ayant la meilleure moyenne.

Partie 5 -- Bilan : tableau recapitulatif

| Concept | Definition | Exemple en C/C++ |
|---|---|---|
| Stack | Pile, zone memoire pour les variables locales, liberee automatiquement | int a = 10; |
| Heap | Tas, zone memoire allouee manuellement, taille = RAM dispo | malloc(...) / new |
| malloc | Reserve un bloc de memoire sur le heap | int *p = malloc(n * sizeof(int)); |
| free | Rend au systeme la memoire allouee par malloc | free(p); |
| Memory leak | malloc sans free : memoire perdue jusqu'a la fin du programme | malloc(...) puis oubli du free |
| Dangling pointer | Pointeur qui pointe vers une zone deja liberee ou detruite | retourner l'adresse d'une variable locale |
| Buffer overflow | Ecrire au-dela de la taille allouee | tab[5] sur un tableau de 5 cases |
| Classe | Modele qui regroupe attributs et methodes | class Point { ... }; |
| Constructeur | Fonction speciale appelee automatiquement a la creation d'un objet | Point(double xi, double yi) |
| Encapsulation | Cacher les donnees (private) et exposer des methodes (public) | private: double x; public: getX() |

Pour aller plus loin :
- calloc met la memoire a 0 et prend (nombre, taille), malloc ne l'initialise pas et prend une taille totale.
- Les smart pointers (std::unique_ptr, std::shared_ptr) gerent la liberation automatiquement (RAII) et evitent les fuites par rapport a new/delete.
