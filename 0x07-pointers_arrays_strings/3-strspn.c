#include "main.h"

/**
 * _strspn-gets the length of a prefix substring.
 * @s:initial segment of s which consist only of bytes from accept.
 * @accept:second string.
 * Return:length of a prefix substring.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	i = 0;

	while (s[i] == accept[i])
		i++;
	return (i);
}
