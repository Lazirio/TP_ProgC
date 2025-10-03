#include <stdio.h>

int main(void) {
    int prix[15] = {1503, 1695, 1742, 1566, 2129, 2230, 1591, 1668, 2282, 1689, 2174, 2173, 2290, 1883, 1974};
    int n = 15;
    int max_perte = 0;
    int indice_achat = 0;
    int indice_vente = 0;
    int meilleur_achat = prix[0];
    int idx_achat = 0;
    int i;

    for (i = 1; i < n; i++) {
        int perte = meilleur_achat - prix[i];

        if (perte > max_perte) {
            max_perte = perte;
            indice_achat = idx_achat;
            indice_vente = i;
        }

        if (prix[i] > meilleur_achat) {
            meilleur_achat = prix[i];
            idx_achat = i;
        }
    }

    printf("Plus grande perte: %d\n", max_perte);
    if (max_perte > 0) {
        printf("Acheter à l'indice %d, Vendre à l'indice %d\n", indice_achat, indice_vente);
        printf("Acheter pour %d, Vendre pour %d\n", prix[indice_achat], prix[indice_vente]);
    } else {
        printf("Aucune perte possible.\n");
    }

    return 0;
}
