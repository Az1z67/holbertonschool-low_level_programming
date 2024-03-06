#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of diagonals
 * @a: pointer for massive
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j = 0;
	int t = 0;
	int s = size * size;

	for (i = 0; i < s; i += size + 1)
	{
		j += a[i];
	}

	for (i = size - 1; i < s - 1; i += size - 1)
	{
		t += a[i];
	}

	printf("%d, %d\n", tl, tr);
}
