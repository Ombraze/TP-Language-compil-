# TP-Language-compil- Partie 2

Exercice 1.2

1) Dans hello.i, le fichier est beaucoup plus long que le source hello.c (on y voit l’expansion des en-têtes, directives #, etc.).
#define MESSAGE a disparu en tant que directive car le préprocesseur l’a remplacée par sa valeur littérale ("Bonjour YNOV !").
Le fichier fait 820 lignes.

2) Oui, dans hello.s on reconnaît des instructions assembleur comme pushq, movq, call, ret.
L’assembleur est un langage bas niveau, très proche du code machine, où chaque instruction correspond (quasi directement) à une opération du processeur.

3) hello.o : fichier objet relogeable (ELF 64-bit relocatable) -> intermédiaire, pas exécutable seul.
hello : exécutable (ELF 64-bit pie executable, lié dynamiquement) ->peut être lancé.

4) La commande unique est :
"gcc hello.c -o hello"

Exercice 2.2

1) J'obtiens un Warning "Wunused-variable" ce qui veut dire qu'une variable (int x) est déclaré mais jamais utilisé.

2) Il faut soit utiliser x, soit supprimer sa déclaration.

3) Parce qu’un warning signale souvent une erreur potentielle de logique. 
Un programme qui compile avec warnings peut fonctionner “en apparence”, mais contenir des bugs cachés et devenir difficile à maintenir, ou échouer dans d’autres conditions.

Exercice 3.3

1) Oui, globalement les tailles correspondent au tableau.
Elles peuvent varier selon la machine car elles dépendent de l’architecture, de l’OS, du compilateur..


exercice 3.5  -> voir #calul.c

exercice 4.2 -> voir #fiche_interacative.c

exercice 5.2 -> voir #erreurs.c

Partie 6 -- Mini-projet : calculatrice interactive -> voir calculatrice.c