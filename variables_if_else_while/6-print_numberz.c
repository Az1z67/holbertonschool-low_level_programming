#include <stdio.h>


/**
*main - function prints single digit numbers to 10
*
*Return: Always 0.
*/


int main(void)
{
int i;
for (i = 0 ; i < 10  ; i++)
{
putchar('0' + i);
}
putchar('\n');
return (0);
}
