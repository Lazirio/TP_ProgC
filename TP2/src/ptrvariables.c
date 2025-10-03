#include <stdio.h>

int main() {
    char c = 0x12;
    short s = 0x1234;
    int i = 0x12345678;
    long int l = 0x12345678;
    long long int ll = 0x1234567890ABCDEF;
    float f = 1.0f;
    double d = 2.0;
    long double ld = 3.0;

    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pl = &l;
    long long int *pll = &ll;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("Avant la manipulation :\n");
    printf("Adresse de c : %p, Valeur de c : %02x\n", (void*)pc, (unsigned char)c);
    printf("Adresse de s : %p, Valeur de s : %04x\n", (void*)ps, (unsigned short)s);
    printf("Adresse de i : %p, Valeur de i : %08x\n", (void*)pi, (unsigned int)i);
    printf("Adresse de l : %p, Valeur de l : %08lx\n", (void*)pl, (unsigned long)l);
    printf("Adresse de ll : %p, Valeur de ll : %016llx\n", (void*)pll, (unsigned long long)ll);
    printf("Adresse de f : %p, Valeur de f : %08x\n", (void*)pf, *(unsigned int*)pf);
    printf("Adresse de d : %p, Valeur de d : %016llx\n", (void*)pd, *(unsigned long long*)pd);
    printf("Adresse de ld : %p, Valeur de ld : (non affichée)\n", (void*)pld);

    // Modification via pointeurs
    *pc = 0x34;
    *ps = 0x5678;
    *pi = 0x87654321;
    *pl = 0x87654321;
    *pll = 0x0FEDCBA987654321;
    *(float*)pf = 0.5f;
    *(double*)pd = 1.5;
    // long double manipulation souvent complexe selon environnement, laissé inchangé

    printf("\nAprès la manipulation :\n");
    printf("Adresse de c : %p, Valeur de c : %02x\n", (void*)pc, (unsigned char)c);
    printf("Adresse de s : %p, Valeur de s : %04x\n", (void*)ps, (unsigned short)s);
    printf("Adresse de i : %p, Valeur de i : %08x\n", (void*)pi, (unsigned int)i);
    printf("Adresse de l : %p, Valeur de l : %08lx\n", (void*)pl, (unsigned long)l);
    printf("Adresse de ll : %p, Valeur de ll : %016llx\n", (void*)pll, (unsigned long long)ll);
    printf("Adresse de f : %p, Valeur de f : %08x\n", (void*)pf, *(unsigned int*)pf);
    printf("Adresse de d : %p, Valeur de d : %016llx\n", (void*)pd, *(unsigned long long*)pd);
    printf("Adresse de ld : %p, Valeur de ld : (non affichée)\n", (void*)pld);

    return 0;
}
