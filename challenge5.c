#include <stdio.h>

int main() {
    int taille, i, min;
    printf("entrer la taille du tableau : ");
    scanf("%d", &taille);
    int tableau[taille];
    printf("entrer les elements du tableau :\n");
    for (i = 0; i < taille; i++) {
        printf("element %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }
    min = tableau[0];
    for (i = 1; i < taille; i++) {
        if (tableau[i] < min) {
            min = tableau[i];
        }
    }
    printf("le plus grand element du tableau est : %d\n", min);
    return 0;
}