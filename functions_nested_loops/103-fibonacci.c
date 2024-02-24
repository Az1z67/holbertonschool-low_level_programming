#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function that finds and prints the sum,
 * of the even-valued terms, followed by a new line.
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int term1 = 1, term2 = 2, next_term = 0;
	long sum = 2;

	while (term2 <= 4000000)
	{
		next_term = term1 + term2;
		term1 = term2;
		term2 = next_term;

		if (term2 % 2 == 0)
		{
			sum += term2;
		}
	}

	printf("%ld\n", sum);

	return (0);
}

