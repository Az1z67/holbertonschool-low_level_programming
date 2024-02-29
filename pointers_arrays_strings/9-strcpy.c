#include<stdio.h>
#include "main.h"
/**
 *_strcpy - function that copies the string
 *@dest: pointer1
 *@src: pointer2
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for ( ; b < a ; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
