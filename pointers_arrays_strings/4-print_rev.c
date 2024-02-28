#include "main.h"

/**
* reverse_array - function returns reverse of array
* @a: takes in a character
* @n:take in a char
* Return: void
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
