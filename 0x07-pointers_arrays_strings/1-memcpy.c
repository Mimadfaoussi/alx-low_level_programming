#include "main.h"

/**
 * _memcpy-copies memory area.
 * @dest:destination
 * @src:source.
 * @n:nb to copy.
 * Return:dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
