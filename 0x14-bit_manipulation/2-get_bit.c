#include "main.h"
/**
 * get_bit - get bit at index.
 * @n: the number.
 * @index: the index
 * Return:the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
