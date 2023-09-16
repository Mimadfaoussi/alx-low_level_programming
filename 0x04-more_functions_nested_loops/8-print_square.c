#include "main.h"

/**
 * print_square-function that prints a square followed by a new line
 * @size:size of the square
 * Retrun:Noting
 */

void print_square(int size)
{
	int i;
	int j;

	i = 0;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar(35);
				j++;
			}
			i++;
			_putchar('\n');
		}
	}
}

