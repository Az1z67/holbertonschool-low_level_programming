#include "main.h"

/**
* reverse_array - function that returns reverse
* @a: takes in a value
* @n:takes in a char
*/

void reverse_array(int *a, int n)
{
	int len;
	
	int i;
	for (len = n - 1; len >= 0; len--)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
}
