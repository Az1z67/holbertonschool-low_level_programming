#include "main.h"

/**
 *_print_rev_recursion - function that prints a string reversed
 *@s: value 
 */

void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
}
_putchar('\n');

if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
