#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searching for a value from str2
 * @s: the str1
 * @accept: str2 
 * Return: an address or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (NULL);
}
