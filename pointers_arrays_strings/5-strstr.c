#include "main.h"

/**
 * _strstr - find in needle from haysatack
 * @haysatack: str1
 * @needle: str2
 * Return: haystack or 0
 */


char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		n = needle;
		h = haystack;
		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
