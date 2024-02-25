#include "main.h"

/**
 * print_number - Prints a number
 * @n: The number to be printed
 */
void print_number(int n);

/**
 * print_times_table - Prints the times table of the input,
 * starting with 0.
 * @n: The value of the times table to be printed.
 */
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
            }
            if (result >= 100)
            {
                _putchar((result / 100) + '0');
                _putchar(((result / 100)) % 10 + '0');
            }
            else if (result >= 10)
            {
                _putchar(' ');
                print_number(result);
            }
            else
            {
                if (j != 0)
                {
                    _putchar(' ');
                    _putchar(' ');
                }
                print_number(result);
            }
        }
        _putchar('\n');
    }
}

/**
 * print_number - Prints a number
 * @n: The number to be printed
 */
void print_number(int n)
{
    if (n >= 10)
    {
        _putchar((n / 10) + '0');
        _putchar((n % 10) + '0');
    }
    else
    {
        _putchar(n + '0');
    }
}

