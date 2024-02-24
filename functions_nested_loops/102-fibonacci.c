#include <stdio.h>

int main() {
    long long fib[50];
    int i;

    fib[0] = 1;
    fib[1] = 2;

    for (i = 2; i < 50; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for (i = 0; i < 49; i++) {
        printf("%lld, ", fib[i]);
    }

    printf("%lld\n", fib[49]);

    return 0;
}

