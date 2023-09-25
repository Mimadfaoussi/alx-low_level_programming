#include "main.h"

/**
 * _strstr:locates a substring.
 * @haystack:where to look.
 * @needle:what to look for.
 * Return:string or null.
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int length;
	int pos;

	length = 0;
	i = 0;
	while (needle[i] != '\0')
		length++;
	while (haystack[i] != '\0')
	{
		while ((haystack[i] != needle[0]) && (haystack[i] != '\0'))
			i++;
		i++;
		j = 1;
		pos = i;
		while ((haystack[pos] != '\0') && (haystack[pos] == needle[j]) && (needle[j] != '\0'))
		{
			pos++;
			j++;
		}
		if (j == length)
			return (haystack+i-1);
		else
			i = i++;
	}
	return ('\0');
}
