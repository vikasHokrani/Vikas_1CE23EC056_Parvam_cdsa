#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 128) {
        printf("%d\n", i * 2);
        i *= 2;
    }
    return 0;
}