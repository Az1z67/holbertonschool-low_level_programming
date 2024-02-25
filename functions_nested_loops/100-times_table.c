#include "main.h"

/**
 * print_number - Prints a number
 * @n: The number to be printed
 */
void print_number(int n)
{
    if (n >= 100)
    {
        _putchar((n / 100) + '0');
        _putchar(((n / 10) % 10) + '0');
        _putchar((n % 10) + '0');
    }
    else if (n >= 10)
    {
        _putchar(' ');
        _putchar((n / 10) + '0');
        _putchar((n % 10) + '0');
    }
    else
    {
        if (n != 0)
            _putchar(' ');

        _putchar(n + '0');
    }
}

void print_times_table(int n)
{
    int i, j;

    if (n < 0 || n > 15)
        return;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            int result = i * j;

            if (j != 0)
            {
                _putchar(',');
                _putchar(' ');

                if (result < 10)
                    _putchar(' ');
            }

            print_number(result);
        }
        _putchar('\n');
    }
}

