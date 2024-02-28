#include "main.h"
#include <stdio.h>

/**
 * print_array - function for printing strs
 * @a: array
 * @n: len of array
 */

void print_array(int *a, int n)
{
int f;

for (f = 0; f < n; f++)
{
printf("%d", a[f]);
if (f != n - 1)
{
printf(", ");
}
}
printf("\n");
}
