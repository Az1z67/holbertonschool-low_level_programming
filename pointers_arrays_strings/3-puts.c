#include "main.h"

/**
 * _puts - functions prints string
 * @str: The string
 */

void _puts(char *str)
	{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i++]);
	}
	_putchar('\n');
}
