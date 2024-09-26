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
    printf("les elements impairs du tableau sont :\n");
    for (i = 0; i < taille; i++) {
        if (tableau[i] % 2 == 1) {
            printf("%d ", tableau[i]);
        }
    }
    return 0;
}