#include <stdio.h>

int main() {
    char s1[100] = "Hello";
    char s2[100] = " World!";
    char copie[100];
    char concat[200];
    int i = 0, j = 0, len = 0;
    while (s1[len] != '\0') len = len + 1;
    printf("%d\n", len);
    while (s1[i] != '\0') {
        copie[i] = s1[i];
        i = i + 1;
    }
    copie[i] = '\0';
    i = 0;
    while (s1[i] != '\0') {
        concat[i] = s1[i];
        i = i + 1;
    }
    j = 0;
    while (s2[j] != '\0') {
        concat[i + j] = s2[j];
        j = j + 1;
    }
    concat[i + j] = '\0';
    printf("%s\n", copie);
    printf("%s\n", concat);
    return 0;
}
