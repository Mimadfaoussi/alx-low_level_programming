#include "main.h"

/**
 * print_binary-prints the binary representation of a number
 * @n:number to print as binary
 * Return:nothing it's a void funciton
 */

void print_binary(unsigned long int n)
{
	int			index;
	int			j;
	unsigned long int	number;

	j = 0;
	index = 63;
	while (index >= 0)
	{
		number = n >> index;
		if (number & 1)
		{
			_putchar('1');
			j = 1;
		}
		else
		{
			if (j == 1)
				_putchar('0');
		}
		index--;
	}
	if (j == 0)
		_putchar('0');
}
