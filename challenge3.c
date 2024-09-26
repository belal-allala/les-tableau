#include <stdio.h>

int main() {
    int taille, i, somme = 0;
    printf("entrer la taille du tableau : ");
    scanf("%d", &taille);
    int tableau[taille];
    printf("entrer les elements du tableau :\n");
    for (i = 0; i < taille; i++) {
        printf("element %d : ", i + 1);
        scanf("%d", &tableau[i]);
        somme += tableau[i];
    }
    printf("la somme des elements du tableau est : %d", somme);
    return 0;
}