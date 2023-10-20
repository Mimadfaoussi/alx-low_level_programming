#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * argstostr - concatinate args.
 * @ac: takes in nb of args.
 * @av: the chars
 * Return: the new string.
 */
char *argstostr(int ac, char **av)
{
	char	*str;
	int	i;
	int	size;
	int	j;

	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	size = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			size++;
			j++;
		}
		i++;
	}
	size = size + ac + 1;
	str = malloc(sizeof(char) * size);
	if (!str)
		return (NULL);
	size = 0;
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			str[size] = av[i][j];
			j++;
			size++;
		}
		str[size] = '\n';
		i++;
	}
	str[size] = '\0';
	return (str);
}
