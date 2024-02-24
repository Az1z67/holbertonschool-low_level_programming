#include <stdio.h>

int main() {
    unsigned long a = 1, b = 2, c;
    int count;

    printf("1, 2, ");

    for (count = 2; count < 98; count++) {
        c = a + b;
        printf("%lu", c);
        if (count < 97) {
            printf(", ");
        }
        a = b;
        b = c;
    }
    printf("\n");

    return 0;
}

