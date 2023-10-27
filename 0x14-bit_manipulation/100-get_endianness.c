#include "main.h"

/**
 * get_endianness - check the endianess
 * Return: void.
 */

int get_endianness(void)
{
	unsigned int i;
	char	*str;

	i = 1;
	str = (char *)&i;
	if (*str)
		return (1);
	else
		return (0);
}

