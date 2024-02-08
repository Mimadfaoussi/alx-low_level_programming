#include "main.h"

/**
 * get_endianness-check the endianness
 * Return:0 if big endian or 1 if little endian
 */

int get_endianness(void)
{
	unsigned int	i;
	char		*str;

	str = (char *)&i;
	if (*str)
		return (1);
	else
		return (0);
}
