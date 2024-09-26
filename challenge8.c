#include <stdio.h>

int main() {
    int taille, i;
    printf("entrer la taille du tableau : ");
    scanf("%d", &taille); 
    int tableau1[taille];
    printf("entrer les elements du premier tableau :\n");
    for (i = 0; i < taille; i++) {
        printf("element %d : ", i + 1);
        scanf("%d", &tableau1[i]);
    }
    int tableau2[taille];
    for (i = 0; i < taille; i++) {
        tableau2[i] = tableau1[i];
    }
    printf("tableau original :\n");
    for (i = 0; i < taille; i++) {
        printf("%d ", tableau1[i]);
    }

    printf("\ntableau copie :\n");
    for (i = 0; i < taille; i++) {
        printf("%d ", tableau2[i]);
    }
    return 0;
}