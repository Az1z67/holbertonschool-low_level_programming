#include "main.h"


/**
 * print_times_table - Prints the n times table
 * @n: The number to determine the size of the times table
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
                print_number(result);
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
