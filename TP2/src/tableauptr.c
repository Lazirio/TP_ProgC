#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 11

int main() {
    int tabInt[TAILLE];
    float tabFloat[TAILLE];
    int *pInt = tabInt;
    float *pFloat = tabFloat;

    srand(time(NULL));

    // Remplissage aléatoire
    for (int i = 0; i < TAILLE; i++) {
        *(pInt + i) = rand() % 200;
        *(pFloat + i) = ((float)(rand() % 2000)) / 100.0f;
    }

    printf("Tableau int avant :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", *(pInt + i));
    }
    printf("\n");

    printf("Tableau float avant :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%.2f ", *(pFloat + i));
    }
    printf("\n");

    // Multiplication par 3 pour indices divisibles par 2
    for (int i = 0; i < TAILLE; i += 2) {
        *(pInt + i) *= 3;
        *(pFloat + i) *= 3.0f;
    }

    printf("Tableau int apres :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", *(pInt + i));
    }
    printf("\n");

    printf("Tableau float apres :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%.2f ", *(pFloat + i));
    }
    printf("\n");

    return 0;
}
