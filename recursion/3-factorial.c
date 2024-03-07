#include "main.h"

/**
* factorial  - function returns factorial
* @n: value
* Return: -1 or 1 or fact
*/

int factorial(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
