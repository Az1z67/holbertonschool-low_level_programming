#include <stdio.h>

int main(void) {
    unsigned long a = 1, b = 2, c;
    int count = 2;

    printf("%lu, %lu, ", a, b);

    while (count < 98) {
        c = a + b;
        printf("%lu", c);
        count++;

        if (count != 98) {
            printf(", ");
        }

        a = b;
        b = c;
    }

    printf("\n");

    return 0;
}

