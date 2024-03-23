#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * print_name - function that prints a name
 * @name: string pointer
 * @f: pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
f(name);
}
