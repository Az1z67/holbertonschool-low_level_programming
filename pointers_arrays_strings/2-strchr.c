#include "main.h"

/**
 * _strchr - function that checks c
 * @c: value
 * @s: str
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{
	for (; ; s++)
	{
		if (*s == 0)
		{
			return (s);
		}
		if (*s == 0)
		{
			return (NULL);
		}
	}
	return (0);
}
