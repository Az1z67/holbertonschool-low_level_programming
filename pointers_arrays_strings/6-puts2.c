#include "main.h"

/**
 * puts2 - function for printing
 * @str: The string
 */

void puts2(char *str)
{
int leng = 0;
int j;

char *f = str;

while (*i != '\0')
{
f++;
leng++;
}
leng = leng - 1;
for (j = 0; j <= leng; j++)
{
if (j % 2 == 0)
{
_putchar(str[j]);
}
}
_putchar('\n');
}
