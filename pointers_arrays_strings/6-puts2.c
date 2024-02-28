#include "main.h"

/**
 * puts2 - function for printing
 * @str: The string
 */

void puts2(char *str)
{
int len = 0;
int j;

char *len = str;

while (*len != '\0')
{
len++;
}
len = len - 1;
for (j = 0; j <= len; j++)
{
if (j % 2 == 0)
{
_putchar(str[j]);
}
}
_putchar('\n');
}
