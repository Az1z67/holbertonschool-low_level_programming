#include <stdio.h>

int main() {
    long long int a = 1, b = 2;
    long long int next;
    int i;

    printf("%ld, %ld, ", a, b);

    for (i = 3; i <= 98; ++i) {
        next = a + b;
        printf("%lld, ", next);
        a = b;
        b = next;
    }

    printf("\n");

    return 0;
}
