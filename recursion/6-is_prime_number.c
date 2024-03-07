#include "main.h"
#include <stdio.h>

/**
  * checker - checks the input
  * @n: num
  * @base: num2
  * Return: 1 if n is a prime, else return 0
  */

int checker(int n, int base)
{
	if (base % n == 0 || base < 2)
		return (0);
	else if (n == base - 1)
		return (1);
	else if (base > n)
		return (checker(n + 1, base));
	return (1);
}

/**
  * is_prime_number - function that checks if the number is a prime
  * @n: num
  * Return: 1 if n is a prime, else return 0 otherwise.
  */

int is_prime_number(int n)
{
	return (checker(2, n));
}
