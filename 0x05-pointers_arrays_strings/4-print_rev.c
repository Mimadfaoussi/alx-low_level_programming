#include "main.h"

/**
 * print_rev-print a string in reverse order.
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
