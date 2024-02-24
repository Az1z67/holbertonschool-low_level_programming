#include <stdio.h>

int main() {
    int n = 98;
    int t1 = 1, t2 = 2;
    int nextTerm;

    printf("%d, %d, ", t1, t2);

    for (int i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        printf("%d", nextTerm);

        if (i < n) {
            printf(", ");
        }

        t1 = t2;
        t2 = nextTerm;
    }

    printf("\n");
    return 0;
}

