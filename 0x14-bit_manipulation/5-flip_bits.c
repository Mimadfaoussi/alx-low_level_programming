#include "main.h"

/**
 * flip_bits - gets number of bits you would need to flip nb et nb1.
 * @n: nb1 to flip.
 * @m: nb2 to flip.
 * Return: nb of bits we need to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned long int nb1;
	unsigned long int nb2;
	unsigned int	count;

	count = 0;
	i = 63;
	while (i >= 0)
	{
		nb1 = (n >> i) & 1;
		nb2 = (m >> i) & 1;
		if ((nb1 ^ nb2) == 1)
		{
			count++;
		}
		i--;
	}
	return (count);
}

