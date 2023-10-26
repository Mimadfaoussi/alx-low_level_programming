#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a giving index.
 * @n: numberwe take.
 * @index: is the index.
 * Return: 1 or  -1 if an error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int position;

	if (index > 63)
		return (-1);
	position = 1;
	position = position << index;
	*n = *n | position;
	return (1);
}
