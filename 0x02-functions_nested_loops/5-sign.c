#include "main.h"

/**
 * print_sign - print the sign of n.
 * @n:is the number
 * Return: 1 and print + if n is greater than 0
 *	0 and 0 if n is 0
 *	-1 and - if n is < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar(45);
	}
	return (-1);
}
