#include <stdio.h>
#include <stdlib.h>


/**
 * main - function that returns change
 * @argc: args
 * @argv: argv
 * Return: 0 or 1
 */


int main(int argc, char *argv[])
{
        int a, b = 0, i, j;
        int c[5] = {25, 10, 5, 2, 1};

        if (argc != 2)
        {
                puts("Error");
                return (1);
        }
        a = atoi(argv[1]);
        if (a <= 0)
        {
                puts("0");
                return (1);
        }
        else
        {
                for (i = 0; i < 5; i++)
                {
                        j = a / c[i];
                        a -= j * c[i];
                        b += j;
                        if (a == 0)
                                break;
                }
        }
        printf("%d\n", b);
        return (0);
}
