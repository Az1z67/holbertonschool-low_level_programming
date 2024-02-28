#include "main.h"

/**
* reverse_array - function that returns reverse
* @a: takes in a value
* @n:takes in a char
*/

void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
}
