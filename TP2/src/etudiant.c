#include <stdio.h>

int main() {
    char noms[5][20] = {"Dupont", "Martin", "Bernard", "Dubois", "Moreau"};
    char prenoms[5][20] = {"Alice", "Bob", "Claire", "David", "Eva"};
    char adresses[5][50] = {
        "1 rue A",
        "2 avenue B",
        "3 boulevard C",
        "4 place D",
        "5 chemin E"
    };
    float notes_prog[5] = {14.5, 12.0, 16.0, 10.5, 15.2};
    float notes_sys[5] = {13.0, 11.5, 14.5, 12.0, 16.8};

    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d : %s %s\n", i+1, prenoms[i], noms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note Programmation C : %.1f\n", notes_prog[i]);
        printf("Note Systeme Exploitation : %.1f\n\n", notes_sys[i]);
    }
    return 0;
}
