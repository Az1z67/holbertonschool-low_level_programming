#include "main.h"

/**
 * _memcpy - copies from src to dest
 * @src: first address
 * @dest: second
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = 0;

	while (n > 0)
	{
		src[a] = dest[b];
		a++;
		b++;
		n--;
	}
	retutn (dest);
}
