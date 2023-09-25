#include "main.h"

/**
 * _strchr-locates a character in a string.
 * @s:string.
 * @c:the character to locate.
 * Return:a pointer to the first occurrence of the character c in the string s.
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
