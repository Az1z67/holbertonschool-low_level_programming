#include "main.h"
#include <stdio.h>

/**
 * _isdigit - function that check if it's a digit
 * @c: is a variable value
 *
 * Return: 1 if it is digit and 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
