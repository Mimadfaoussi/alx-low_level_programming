#include "main.h"


/**
 * _strlen-return the length of a string.
 * @s:the string.
 * Return:int the length .
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}


/**
 * rev_string-reverse  a string.
 * @s:the string.
 * Return:nothing.
 */
void rev_string(char *s)
{
	int i;
	int j;
	char x;

	j = 0;
	i = _strlen(s) - 1;
	while (i != j)
	{
		x = s[i];
		s[i] = s[j];
		s[j] = x;
		i--;
		j++;
	}
}
