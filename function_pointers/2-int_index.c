#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - returns index of first element
 * @array: array
 * @size: size
 * @cmp: is a pointer
 * Return: 0 or 1
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array != 0 && size > 0 && cmp != 0)
	{
		for (a = 0; a < size; a++)
			if (cmp(array[a]))
				return (a);
	}
	else
		return (-1);
	return (-1);
}
