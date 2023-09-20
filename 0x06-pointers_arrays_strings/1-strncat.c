#include "main.h"

/**
 * _strncat- function that concatenates two strings.
 * @dest:destination string.
 * @src:source string.
 * @n:number of bytes it takes from src.
 * Return:pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

