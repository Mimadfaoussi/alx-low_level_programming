#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _strdup-duplicates a string into newly allocated memory space
 *
 * @str: string to copy.
 *
 * Return: pointer to new allocated space in memory which contain str
 */
char	*_strdup(char *str)
{
	char	*ptr;
	int	i;

	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	ptr = malloc(sizeof(char) * i + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

