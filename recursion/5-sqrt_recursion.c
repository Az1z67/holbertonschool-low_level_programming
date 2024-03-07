#include "main.h"
/**
 * checker - function that checks
 * @n: number1
 * @base: number2
 * Return: int
 */
int checker(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (checker(n + 1, base));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: num
 * Return: num
 */

int _sqrt_recursion(int n)
{
	return (checker(1, n));
}
