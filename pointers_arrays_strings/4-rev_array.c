#include "main.h"
#include <stdio.h>

/**
* reverse_array - function for reversing
* @a: array
* @n: value
*/

void reverse_array(int *a, int n)
{
	int j, last;

	last = n - 1;

	for (j = 0; j < n / 2; j++)
	{
		int start, end;
		start = a[j];
		end = a[last];
		a[j] = end;
		a[last] = start;
		last--;
	}
}
