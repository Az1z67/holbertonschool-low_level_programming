#include "main.h"


/**
* print_last_digit -function for the absolute value of integer
*
*@n: - last digit of n
* Return: 1 for letters. Returns 0 for the rest
*/


int print_last_digit(int n)
{
int digit = n % 10;
if (digit < 0)
{
_putchar(-digit + 48);
return (-digit);
}
else
{
_putchar(digit + 48);
}
return (digit);
}
