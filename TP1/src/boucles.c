#include <stdio.h>
#include <string.h>

int main() {
    int compteur;

    printf("Entrez la taille du triangle (moins de 10) : ");
    scanf("%d", &compteur);

    if (compteur >= 10) {
        printf("Erreur : la valeur doit être strictement inférieure à 10.\n");
        return 1;
    }

    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
