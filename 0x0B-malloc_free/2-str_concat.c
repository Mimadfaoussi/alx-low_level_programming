#include <stdlib.h>

/**
 * str_concat - concatenates 2 strings
 *
 * @s1: first string
 * @s2: string to add to end of 1st string
 *
 * Return: pointer to new string.
 */

char *str_concat(char *s1, char *s2)
{
	int	i;
	int	j;
	int	size;
	char	*ptr;

	i = 0;
	j = 0;
	if (s1)
	{
		while (s1[i])
			i++;
	}
	else
		s1 = "";
	if (s2)
		while (s2[j])
			j++;
	else
		s2 = "";
	size = i + j;
	ptr = malloc(sizeof(char) * size + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		ptr[i] = s2[j];
		j++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
