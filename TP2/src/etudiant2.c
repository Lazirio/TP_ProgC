#include <stdio.h>
#include <string.h>

typedef struct {
    char nom[20];
    char prenom[20];
    char adresse[50];
    float note1;
    float note2;
} Etudiant;

int main() {
    Etudiant etudiants[5];

    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20 Boulevard Niels Bohr");
    etudiants[0].note1 = 16.5;
    etudiants[0].note2 = 12.1;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22 Boulevard Niels Bohr");
    etudiants[1].note1 = 14.0;
    etudiants[1].note2 = 14.1;

    // Ajoutez 3 autres étudiants ici de la même manière
    strcpy(etudiants[2].nom, "Bernard");
    strcpy(etudiants[2].prenom, "Claire");
    strcpy(etudiants[2].adresse, "10 rue de Paris");
    etudiants[2].note1 = 15.0;
    etudiants[2].note2 = 13.5;

    strcpy(etudiants[3].nom, "Dubois");
    strcpy(etudiants[3].prenom, "David");
    strcpy(etudiants[3].adresse, "5 avenue Victor Hugo");
    etudiants[3].note1 = 13.7;
    etudiants[3].note2 = 14.8;

    strcpy(etudiants[4].nom, "Moreau");
    strcpy(etudiants[4].prenom, "Eva");
    strcpy(etudiants[4].adresse, "8 boulevard Saint Michel");
    etudiants[4].note1 = 17.2;
    etudiants[4].note2 = 15.6;

    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d : %s %s\n", i+1, etudiants[i].prenom, etudiants[i].nom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note 1 : %.1f\n", etudiants[i].note1);
        printf("Note 2 : %.1f\n\n", etudiants[i].note2);
    }
    return 0;
}
