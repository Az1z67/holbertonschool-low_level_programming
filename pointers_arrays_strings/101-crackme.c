#include <stdio.h>
#include <string.h>

#define EXPECTED_PASSWORD "your_expected_password_here"

int main(int a, char *b[]) {
    if (a != 2) {
        printf("Usage: %s password\n", b[0]);
        return 1;
    }

    char *provided_password = b[1];

    if (strcmp(provided_password, EXPECTED_PASSWORD) == 0) {
        printf("Tada! Congrats\n");
    } else {
        printf("Incorrect password\n");
    }

    return 0;
}

