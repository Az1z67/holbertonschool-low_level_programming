#include "main.h"
#include <ctype.h>


/**
*_islower-function check c lower or not
*
*@c:the charscter input
* Return: 1 for lowercase. 0 for the rest.
*/


int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
