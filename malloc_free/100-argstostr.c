#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac:arguement count
 * @av:arguement array
 * Return: p or NULL.
 */

char *argstostr(int ac, char **av)
{
	int a = 0, b = 0, c = 0, length = 0;

	char *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			length++;
		}
		length += 1;
	}
	p = malloc((sizeof(char) * length) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			p[c] = av[a][b];
			c++;
		}
		p[c] = '\n';
		c++;
	}
	p[c] = '\0';
	return (p);
}
