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
 * puts_half-prints half of a string, followed by a new line.
 * @str:string to be printed.
 * Return:nothing
 */

void puts_half(char *str)
{
	int length;
	int half;

	length = _strlen(str);
	if (length % 2 != 0)
		half = (length - 1) / 2;
	else
		half = length / 2;
	if (length % 2 != 0)
		half++;
	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}

