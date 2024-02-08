#include "main.h"

/**
 * get_bit-return the value of a bit at a given index
 * @n:the number
 * @index:index of the bit to return
 * Return:bit at index or -1 if an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	return ((n >> index) & 1);
}

