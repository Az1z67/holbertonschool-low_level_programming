#include <stdio.h>
#include "main.h"

/**
*_putchar - Writes a character to stdout
*@c: The character to be printed
*
*print_alphabet - function print_alphabet _putchar
*
*Return: Always 0.
*/
void _putchar(char c);
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
