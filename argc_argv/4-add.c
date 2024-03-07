#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Prints sum of two pos arg
 * @argc: argument
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int mul = 0;
	size_t j;

	if (argv[1] == NULL || argv[2] == NULL)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (0);
			}
		}
		mul += atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
