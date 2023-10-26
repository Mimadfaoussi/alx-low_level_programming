/**
 * clear_bit - set bit at position index to 0
 * @n:integer to change.
 * @index:position
 * Return:1 if worked or -1.
 */

#include "main.h"
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned long int p;

	if (index > 63 || n == NULL)
		return (-1);
	p = 1;
	p = i << 1;
	i = 1;
	while (i < index)
	{
		p = (p << 1) | 1;
		i++;
	}
	*n = *n & p;
	return (1);
}


