#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @n: string
 * Return: n
 */

char *cap_string(char *n)
{
	int i = 0;

	if (n[0] >= 'a' && n[0] <= 'z')
	n[0] -= 32;

	while (n[i] != '\0')
	{
		if (n[i] == ' ' || n[i] == '\t' || n[i] == '\n' ||
			n[i] == ',' || n[i] == ';' || n[i] == '.' ||
			n[i] == '!' || n[i] == '?' || n[i] == '"' ||
			n[i] == '(' || n[i] == ')' || n[i] == '{' || n[i] == '}')
		{
			if (n[i + 1] >= 'a' && n[i + 1] <= 'z')
			{
				n[i + 1] -= 32;
			}
		}
		i++;
	}
	return (n);
}
