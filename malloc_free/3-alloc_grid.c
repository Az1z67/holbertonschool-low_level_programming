#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 * @width: columns
 * @height: rows
 * Return: pointer or 0
 */
int **alloc_grid(int width, int height)
{
	int **mas, i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	mas = malloc(sizeof(int *) * height);
	if (mas == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		mas[i] = malloc(sizeof(int) * width);
		if (mas[i] == NULL)
		{
			while (--i >= 0)
			{
				free(mas[i]);
			}
			free(mas);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			mas[i][j] = 0;
		}
	}
	return (mas);
}
