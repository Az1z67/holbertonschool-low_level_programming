#include <stdio.h>

void print_times_table(int n) {
    if (n < 0 || n > 15) {
        return;
    }

    int i, j;

    for (i = 0; i <= n; i++) {
        for (j = 0; j <= n; j++) {
            int result = i * j;
            printf("%d", result);

            if (j < n) {
                printf(", ");
            } else {
                printf("\n");
            }
        }
    }
}

int main() {
    int n = 12;
    print_times_table(n);
    return 0;
}

