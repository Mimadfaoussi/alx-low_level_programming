#include "main.h"


/**
 * _strlen-return the length of a string.
 * @s:the string.
 * Return:int the length .
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}


/**
 * print_rev-print a string in rev order.
 * @s:the string.
 * Return:nothing.
 */
void print_rev(char *s)
{
	int i;

	i = _strlen(s) - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
