#include "main.h"
#include <stdio.h>

/**
* _strncat - function for connecting
* @dest: str1
* @src: str2
* @n:bytes
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		if (src[i] != n)
		{
			break;
		}
		j++;
		i++;
		dest[i] = '\0';
	}
return (dest);
}
