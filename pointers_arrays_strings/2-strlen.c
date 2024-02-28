#include "main.h"
/**
* _strlen  - function that returns the length of string
* @s: takes in the value
* Return: l
*/
int _strlen(char *s)
{
	int i, l = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		l++;
	}
	return (l);
}
