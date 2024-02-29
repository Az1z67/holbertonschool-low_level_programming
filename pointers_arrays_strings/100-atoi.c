#include <main.h>

/**
* _atoi - function that onverting string to an integer.
* @s: String.
* Return: num * sign
*/

int _atoi(char *s)
{
	int sign;
	unsigned int num;
	char *cont;

	cont = s;
	num = 0;
	sign = 1;
	while (*cont != '\0' && (*cont < '0' || *cont > '9'))
	{
		if (*cont == '-')
			sign *= -1;
		cont++;
	}
	if (*cont != '\0')
	{
		do {
			num = num * 10 + (*cont - '0');
			temp++;
		} while (*cont >= '0' && *cont <= '9');
	}
	return (num * sign);
}
