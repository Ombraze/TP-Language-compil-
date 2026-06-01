#include <stdio.h>

/* CAS 1 : Oubli du point-virgule */
int main(void) {
    int a = 10
    printf("%d\n", a);
    return 0;
}


/* CAS 2 : Type incompatible */
int main(void) {
    int x = "hello";
    printf("%d\n", x);
    return 0;
}

/* CAS 3 : Fonction non declaree */
int main(void) {
    maFonction();
    return 0;
}
