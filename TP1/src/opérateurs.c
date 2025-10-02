#include <stdio.h>
#include <string.h>
#include <math.h>

float a=16; 
float b=3;

int main() {
    printf("a = %f, b = %f\n", a, b);
    printf("a + b = %f\n", a + b);
    printf("a - b = %f\n", a - b);
    printf("a * b = %f\n", a * b);
    printf("a / b = %f\n", a / b);
    printf("a %% b = %f\n", (float)((int)a % (int)b));
    printf("a ^ b = %f\n", pow(a, b));
    return 0;
}

