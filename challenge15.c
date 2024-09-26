#include <stdio.h>

int main() {
    int taille1, taille2, i, j, k;
    printf("entrer la taille du premier tableau : ");
    scanf("%d", &taille1);
    printf("entrer la taille du deuxieme tableau : ");
    scanf("%d", &taille2);
    int tableau1[taille1], tableau2[taille2], tableau3[taille1 + taille2];
    printf("entrer les elements du premier tableau :\n");
    for (i = 0; i < taille1; i++) {
        printf("element %d : ", i + 1);
        scanf("%d", &tableau1[i]);
    }
    printf("entrer les elements du deuxieme tableau :\n");
    for (i = 0; i < taille2; i++) {
        printf("element %d : ", i + 1);
        scanf("%d", &tableau2[i]);
    }
    for (i = 0; i < taille1; i++) {
        tableau3[i] = tableau1[i];
    }
    for (j = 0; j < taille2; j++) {
        tableau3[i + j] = tableau2[j];
    }
    printf("le tableau fusionne est :\n");
    for (k = 0; k < taille1 + taille2; k++) {
        printf("%d ", tableau3[k]);
    }
    printf("\n");
    return 0;
}