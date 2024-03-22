#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * @array: given array
 * @size: size of array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
