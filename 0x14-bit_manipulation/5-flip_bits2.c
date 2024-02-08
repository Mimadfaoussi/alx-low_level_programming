#include "main.h"

/**
 * flip_bits-the number of bits you would need to flip to get from nb to nb
 * @n:first number
 * @m:second number
 * Return:nb of bits we need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long	nb;
	unsigned int	count;
	int		index;

	count = 0;
	nb = n ^ m;
	index = 63;
	while (index >= 0)
	{
		if ((nb >> index) & 1 == 1)
			count++;
		index--;
	}
	return (count);
}

