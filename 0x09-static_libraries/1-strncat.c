#include "main.h"
#include <stdio.h>
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
	int j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while ((i < n) && (src[i] != '\0'))
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
