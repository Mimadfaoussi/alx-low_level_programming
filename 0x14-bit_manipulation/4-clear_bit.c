#include "main.h"

/**
 * clear_bit-sets the value of a bit to 0 at given index
 * @n:the number
 * @index:the bit index to change
 * Return:1 if worked and -1 in case of error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int	position;

	if (index >= 64)
		return (-1);
	position = 1;
	position = position << index;
	position = ~position;
	*n = *n & position;
	return (1);
}

