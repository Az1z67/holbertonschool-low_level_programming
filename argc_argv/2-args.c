#include <stdio.h>


/**
 * main - a program that prints all arguments
 * @argc: arguement
 * @argv: array
 * Return: 0
 **/


int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
