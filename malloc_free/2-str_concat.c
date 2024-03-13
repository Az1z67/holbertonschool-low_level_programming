#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: 2str
 * @s2: 1str
 * Return: NULL if = 0
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int a, b, c, d;

	if (s1 == 0)
	{
		return (NULL);
	}
	if (s2 == 0)
	{
		return (NULL);
	}
	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;
	b++;
	s = malloc(a * sizeof(*s1) + b * sizeof(*s2));
	if (s == 0)
		return (NULL);
	for (c = 0, d = 0; c < a + b; c++)
	{
		if (c < a)
			s[c] = s1[c];
		else
			s[c] = s2[d++];
	}
	return (s);
}
