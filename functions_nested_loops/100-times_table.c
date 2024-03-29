#include "main.h"

/**
 * print_number - Prints a number
 * @n: The number to be printed
 *
 *
 * print_times_table - Prints the times table up to a specified number.
 * @n: The number specifying the size of the times table (0 <= n <= 15)
 *
 * This function prints the times table starting from 0 up to the specified
 * number 'n'. It ensures that the table is properly formatted and aligned.
 *
 *
 * @n: The value of the times table to be printed.
 */


void print_number(int n);
void print_times_table(int n)
{
int i, j;

if (n < 0 || n > 15)
return;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
int result = i * j;
if (j != 0)
{
_putchar(',');
_putchar(' ');
}
if (result >= 100)
{
_putchar((result / 100) + '0');
_putchar(((result / 10)) % 10 + '0');
_putchar(((result % 10)) + '0');
}
else if (result >= 10)
{
_putchar(' ');
print_number(result);
}
else
{
if (j != 0)
{
_putchar(' ');
_putchar(' ');
}
print_number(result);
}
}
_putchar('\n');
}
}
void print_number(int n)
{
if (n >= 10)
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
else
{
_putchar(n + '0');
}
}
