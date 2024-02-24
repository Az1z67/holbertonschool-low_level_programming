#include "main.h"
#include <unistd.h>

void print_times_table(int n) {
    int i, j;

    if (n < 0 || n > 15)
        return;

    for (i = 0; i <= n; i++) {
        for (j = 0; j <= n; j++) {
            int result = i * j;
            char buffer[4];
            int len;

            if (result < 10) {
                buffer[0] = result + '0';
                len = 1;
            } else {
                buffer[0] = result / 10 + '0';
                buffer[1] = result % 10 + '0';
                len = 2;
            }

            buffer[len++] = ',';
            buffer[len++] = ' ';
            buffer[len++] = '\0';

            write(1, buffer, len);
        }
        write(1, "\n", 1);
    }
}
