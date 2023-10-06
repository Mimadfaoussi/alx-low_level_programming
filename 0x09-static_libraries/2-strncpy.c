#include "main.h"

/**
 * _strncpy-copy n bytes from src to dest.
 * @dest:destination string.
 * @src:source string to copy from.
 * @n:how much to copy.
 * Return:dest string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while ((i < n) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
