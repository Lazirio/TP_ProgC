#include <stdio.h>
#include <string.h>

char a='a';
short b=1;
int c=2;
long d=3;
float e=4.0;
double f=5.0;
long double g=6.0;
unsigned long long int h=7;
signed long long int i=-8;
long int j=9;
unsigned long int k=10;
signed long int m=-11;
unsigned int n=12;
signed int o=-13;
unsigned short p=14;
signed short q=-15;
unsigned char r='b';
signed char s='c';

int main() {
    printf("char a = %c\n", a);
    printf("short b = %d\n", b);
    printf("int c = %d\n", c);
    printf("long d = %ld\n", d);
    printf("float e = %.1f\n", e);
    printf("double f = %.1f\n", f);
    printf("long double g = %.1Lf\n", g);
    printf("unsigned long long int h = %llu\n", h);
    printf("signed long long int i = %lld\n", i);
    printf("long int j = %ld\n", j);
    printf("unsigned long int k = %lu\n", k);
    printf("signed long int m = %ld\n", m);
    printf("unsigned int n = %u\n", n);
    printf("signed int o = %d\n", o);
    printf("unsigned short p = %hu\n", p);
    printf("signed short q = %hd\n", q);
    printf("unsigned char r = %c\n", r);
    printf("signed char s = %c\n", s);
}
