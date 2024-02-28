#include "main.h"

/**
* puts_half - functions for printing half of the string
* @str: The string
*/

void puts_half(char *str)
{
int len = 0;
int j;

char *y = str;

while (*y != '\0')
{
y++;
}
if (y % 2 == 0)
{
j = y / 2;
}
else
{
j = (y + 1) / 2;
}
for (j < y; j++)
{
_putchar(str[j]);
}
_putchar('\n');
}
