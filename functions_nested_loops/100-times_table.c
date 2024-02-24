#include "main.h"
#include <stdio.h>

void print_times_table(int n) {
    if (n < 0 || n > 15)
        return;

    int i, j;

    for (i = 0; i <= n; i++) {
        for (j = 0; j <= n; j++) {
            int result = i * j;
            if (result < 10) {
                putchar(result + '0');
            } else {
                putchar(result / 10 + '0');
                putchar(result % 10 + '0');
            }
            if (j != n) {
                putchar(',');
                putchar(' ');
            }
        }
        putchar('\n');
}
}
