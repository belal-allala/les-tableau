#include <stdio.h>

int main() {
    int taille, i, element;
    printf("entrer la taille du tableau : ");
    scanf("%d", &taille);
    int tableau[taille];
    printf("entrer les elements du tableau :\n");
    for (i = 0; i < taille; i++) {
        printf("lement %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }
    printf("entrer l'element a rechercher : ");
    scanf("%d", &element);
    int trouve = 0;
    for (i = 0; i < taille; i++) {
        if (tableau[i] == element) {
            trouve = 1;
            break;
        }
    }
    if (trouve) {
        printf("l element %d est  dans le tableau.\n", element);
    } else {
        printf("L element %d n est pas dans le tableau.\n", element);
    }
    return 0;
}