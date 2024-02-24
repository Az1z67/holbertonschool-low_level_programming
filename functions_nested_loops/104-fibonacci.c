#include <stdio.h>

int main() {
    int count = 2;
    int a = 1, b = 2, c;
    
    printf("1, 2, ");

    while (count < 98) {
        c = a + b;
        printf("%d", c);
        count++;
        if (count < 98) {
            printf(", ");
        }
        a = b;
        b = c;
    }
    printf("\n");

    return 0;
}
