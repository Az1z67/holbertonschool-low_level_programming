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
