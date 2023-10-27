#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: giving number.
 * Return: Nothing(void).
 */

void print_binary(unsigned long int n)
{
	int j = 0;
	int index = 0;
	unsigned long int number;

	index = 63;
	while (index >= 0)
	{
		number = n >> index;
		if (number & 1)
		{
			_putchar('1');
			j = 1;
		}
		else if (j == 1)
		{
			_putchar('0');
		}
		index--;
	}
	if (j == 0)
		_putchar('0');
}

