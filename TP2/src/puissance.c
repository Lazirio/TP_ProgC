#include <stdio.h>

int main() {
    int a = 2;
    int b = 3;
    int result = 1;
    int i = 0;
    while (i < b) {
        result = result * a;
        i = i + 1;
    }
    printf("%d\n", result);
    return 0;
}
