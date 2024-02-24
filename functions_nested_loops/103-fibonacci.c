#include <stdio.h>

int main(void) {
    int term1 = 1, term2 = 2, next_term = 0;
    long sum = 2;

    while (next_term <= 4000000) {
        next_term = term1 + term2;
        term1 = term2 + next_term;
        term2 = next_term + term1;
        sum += term2;
    }

    printf("%ld\n", sum);

    return 0;
}
