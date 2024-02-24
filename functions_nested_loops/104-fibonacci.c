#include <stdio.h>

int main() {
    int a = 1, b = 2;
    int next;

    printf("%d, %d, ", a, b);

    for (int i = 3; i <= 98; ++i) {
        next = a + b;
        printf("%d, ", next);
        a = b;
        b = next;
    }

    printf("\n");

    return 0;
}
