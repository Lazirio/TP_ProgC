#include <stdio.h>

int main() {
    int d = 0x00880000;
    int x = (d & (1 << (31 - 3))) && (d & (1 << (31 - 19)));
    printf("%d\n", x ? 1 : 0);
    return 0;
}
