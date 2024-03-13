#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer or null
 */

char *_strdup(char *str)
{
	char *strcopy;
	int a, b;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;
	a++;
	strcopy = malloc(sizeof(*str) * a);
	if (strcopy == NULL)
		return (NULL);
	b = 0;
	while (str[b] != '\0')
	{
		strcopy[b] = str[b];
		b++;
	}
	return (strcopy);
}
