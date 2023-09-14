#include "main.h"

/**
 * print_line - print a line with '_'
 * @n:nb of _
 * Return:nothing.
 */

void print_line(int n)
{
	int i;

	i = 0;
	if (n <= 0)
		_putchar('\n');
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}

