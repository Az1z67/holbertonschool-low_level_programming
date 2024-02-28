#include "main.h"

/**
* puts_half - functions for printing half of the string
* @str: The string
*/

void puts_half(char *str)
{
int leng = 0;
int j;

char *f = str;

while (*f != '\0')
{
f++;
leng++;
}
if (leng % 2 == 0)
{
j = leng / 2;
}
else
{
j = (leng + 1) / 2;
}
for (; j < leng; j++)
{
_putchar(str[j]);
}
_putchar('\n');
}
