#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: input string
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13_2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = s;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == rot13[i])
			{
				*s = rot13_2[i];
				break;
			}
		}
		s++;
	}
	return (ptr);
}
