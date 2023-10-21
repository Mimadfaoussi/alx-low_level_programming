#include "main.h"

/**
 * _strlen_recursion - Returns Length of String
 * @s: string
 * Return: On success 1.
 * On error, -1 is returned.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (_strlen_recursion(s + 1) + 1);
	else
		return (0);
}

/**
 * palindrome - check if a string is palindrome.
 * @s:string to check.
 * @i:index where to start.
 * Return: 1 if planidrome and 0 if not
 */

int palindrome(char *s, int i)
{
	int size;

	size = _strlen_recursion(s) - i - 1;
	if (i > size / 2)
		return (1);
	if (s[i] == s[size])
		return (palindrome(s, i + 1));
	else
		return (0);
}


/**
 * is_palindrome - check if a string is palindrome.
 * @s:string to check.
 * Return: 1 if planidrome and 0 if not
 */


int is_palindrome(char *s)
{
	if (!*s)
		return (1);
	return (palindrome(s, 0));
}


