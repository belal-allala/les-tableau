#include <stdio.h>
int main() {
    int taille, i, valeur, nouvelle;
    printf("entrer la taille du tableau : ");
    scanf("%d", &taille);
    int tableau[taille];
    printf("entrer les elements du tableau :\n");
    for (i = 0; i < taille; i++) {
        printf("element %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }
    printf("entrer la valeur a remplacer : ");
    scanf("%d", &valeur);
    printf("entrer la nouvelle valeur : ");
    scanf("%d", &nouvelle);
    for (i = 0; i < taille; i++) {
        if (tableau[i] == valeur) {
            tableau[i] = nouvelle;
        }
    }
    printf("le tableau modifie est :\n");
    for (i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    return 0;
}