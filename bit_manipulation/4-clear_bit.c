#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number.
 * @index: index
 * Return: 1 , or -1
*/


int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int aux =  ~(1 << index);

	if (index > (sizeof((*n)) * 8))
		return (-1);

	*n = *n & aux;
	return (1);
}
