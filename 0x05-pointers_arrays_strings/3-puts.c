#include "main.h"

/**
 * _puts-print a string followed by a newline in stdout.
 * @str:the string.
 * Return:nothing.
 */



void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
