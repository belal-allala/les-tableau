#include <stdio.h>

int main() {
    int taille, i;
    float somme = 0.0, moyenne;
    printf("entrer la taille de tableau : ");
    scanf("%d", &taille);
    int tableau[taille];
    printf("entrer les elements du tableau :\n");
    for (i = 0; i < taille; i++) {
        printf("element %d : ", i + 1);
        scanf("%d", &tableau[i]);
        somme += tableau[i]; 
    }
    moyenne = somme / taille;
    printf("la moyenne des elements du tableau est : %.2f\n", moyenne);
    return 0;
}