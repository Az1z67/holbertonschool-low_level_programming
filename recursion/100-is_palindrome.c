#include "main.h"
/**
 * _strlen_recursion - prints the length of str
 * @s: str
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int length = 0;
	for (; s[length] != '\0'; length++)
	return (length);
}

/**
 * pal_checker - function that cheks is it polindrom
 * @s: str
 * @i: 1sr index
 * @j: 2nd index
 * Return: 0 if not and 1 if yes
 */

int pal_checker(char *s, int i, int j)
{
	if (S[i] == s[j])
		if (i < j / 2)
			return (1);
		else
			return (pal_checker(s, i + 1, j - 1));
	else
		return (0);
}

/**
 * is_palindrome - function that check if s is palindrome
 * @s: ssr
 * Return: 1
 */
int is_palindrome(char *s)
{
	return (pal_checker(s, 0, _strlen_recursioni(s) - 1));
}
