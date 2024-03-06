#include "main.h"
#include <stddef.h>

/**
 * _strchr - check value in string
 * @s: string
 * @c: character
 *
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{
	for (; ; s++)
	{
		if (*s == c)
			return (s);
		if (*s == 0)
			return (NULL);
	}
	return (NULL);
}
