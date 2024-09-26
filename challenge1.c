#include <stdio.h>

int main() {
    int tableau[5] = {1, 2, 3, 4, 5};
    printf("Les elements du tableau sont :\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", tableau[i]);
    }
    return 0;
}