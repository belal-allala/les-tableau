#include <stdio.h>

int main() {
    int taille, i;
    printf("entrer la taille du tableau : ");
    scanf("%d", &taille);
    int tableau[taille];
    printf("entrer les elements du tableau :\n");
    for (i = 0; i < taille; i++) {
        printf("element %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }
    for (i = 0; i < taille / 2; i++) {
        int T = tableau[i];
        tableau[i] = tableau[taille - i - 1];
        tableau[taille - i - 1] = T;
    }
    printf("le tableau inverse est :\n");
    for (i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}