#include <stdio.h>

int main() {
    int taille, i, j, temp;
    printf("entrer la taille du tableau : ");
    scanf("%d", &taille);
    int tableau[taille];
    printf("entrer les elements du tableau :\n");
    for (i = 0; i < taille; i++) {
        printf("element %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }
    for (i = 0; i < taille - 1 ; i++) {
        int minindice=i;
        for (j = i + 1 ; j < taille ;j++){
            if (tableau[minindice]>tableau[j]){
                minindice=j;
            }
        }
        int v=tableau[i];
        tableau[i]=tableau[minindice];
        tableau[minindice]=v;
    }
    printf("le tableau trie en ordre croissant est :\n");
    for (i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
    return 0;
}