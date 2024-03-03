#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define len 6

int main(void)
{
char password[len + 1];
const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

srand(time(NULL));

int i;

for (i = 0; i < len; i++)
{
int index = rand() % (sizeof(charset) - 1);
password[i] = charset[index];
}
password[len] = '\0';

printf("Generated Password: %s\n", password);

return 0;
}

