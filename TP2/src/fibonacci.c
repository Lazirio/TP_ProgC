#include <stdio.h>

int main() {
    int n = 7;
    int a = 0;
    int b = 1;
    int i = 0;
    printf("%d,", a);
    while (i < n) {
        printf("%d,", b);
        int c = a + b;
        a = b;
        b = c;
        i = i + 1;
    }
    return 0;
}
