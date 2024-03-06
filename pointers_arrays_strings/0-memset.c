#include "main.h"

/**
 * _memset - fill s with values
 * @s: address
 * @b: value
 * @n: bytes of address
 * Return: s
 */

char char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
