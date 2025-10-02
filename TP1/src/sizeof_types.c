#include <stdio.h>
#include <string.h>

char a;
short b;
int c;
long d;
float e;
double f;
long double g;
unsigned long long int h;
signed long long int i;
long int j;
unsigned long int k;
signed long int m;
unsigned int n;
signed int o;
unsigned short p;
signed short q;
unsigned char r;
signed char s;

int main() {
    printf("sizeof(char) = %zu\n", sizeof(a));
    printf("sizeof(short) = %zu\n", sizeof(b));
    printf("sizeof(int) = %zu\n", sizeof(c));
    printf("sizeof(long) = %zu\n", sizeof(d));
    printf("sizeof(float) = %zu\n", sizeof(e));
    printf("sizeof(double) = %zu\n", sizeof(f));
    printf("sizeof(long double) = %zu\n", sizeof(g));
    printf("sizeof(unsigned long long int) = %zu\n", sizeof(h));
    printf("sizeof(signed long long int) = %zu\n", sizeof(i));
    printf("sizeof(long int) = %zu\n", sizeof(j));
    printf("sizeof(unsigned long int) = %zu\n", sizeof(k));
    printf("sizeof(signed long int) = %zu\n", sizeof(m));
    printf("sizeof(unsigned int) = %zu\n", sizeof(n));
    printf("sizeof(signed int) = %zu\n", sizeof(o));
    printf("sizeof(unsigned short) = %zu\n", sizeof(p));
    printf("sizeof(signed short) = %zu\n", sizeof(q));
    printf("sizeof(unsigned char) = %zu\n", sizeof(r));
    printf("sizeof(signed char) = %zu\n", sizeof(s));
}