#include <stdio.h>

int main(void) {
    int term1 = 1, term2 = 2, next_term = 0;
    long sum = 2; // Start with 2 since the second term is even

    while (next_term <= 4000000) {
        next_term = term1 + term2;
        if (next_term % 2 == 0) {
            sum += next_term;
        }
        term1 = term2;
        term2 = next_term;
    }

    printf("%ld\n", sum);

    return 0;
}
