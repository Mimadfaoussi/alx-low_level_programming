#include "main.h"

/**
 * set_bit-sets the value of a bit to 1 at a given index
 * @n:the number
 * @index:the index of the  bit to set
 * Return:1 if worked or -1 for error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	return (n | (1 << index));
}

