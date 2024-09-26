#include <stdio.h>

int main() {
    int taille, i, mul = 1;
    printf("entrer la taille du tableau : ");
    scanf("%d", &taille);
    int tableau[taille];
    printf("entrer les elements du tableau :\n");
    for (i = 0; i < taille; i++) {
        printf("element %d : ", i + 1);
        scanf("%d", &tableau[i]);
        mul =mul * tableau[i];
    }
    printf("la multuplication des elements du tableau est : %d", mul);
    return 0;
}