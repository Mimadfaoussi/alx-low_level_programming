#include "main.h"

/**
 * more_numbers-prints 10 times nbrs from 0 to 14
 * Return:nothing
 */

void more_numbers(void)
{
	int i;
	int j;
	int count;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			if (j > 9)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			j++;
		}
		i++;
		if (i < 10)
			_putchar('\n');

	}
}


int main(void)
{
    more_numbers();
    return (0);
}


