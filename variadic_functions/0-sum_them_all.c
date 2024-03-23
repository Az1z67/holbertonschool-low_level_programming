#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all integers
 * @n: integer
 * Return: sum of integers
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n != 0)
	{
		int sum = 0;
		unsigned int i = 0;

		va_list ptr;

		va_start(ptr, n);

		for (i = 0; i < n; i++)

			sum += va_arg(ptr, int);

		va_end(ptr);

		return (sum);
	}
	return (0);
}
