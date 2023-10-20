#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * words - function that splits string into words
 * @str: string being passed
 * Return: a pointer to an array of strings (words).
 */
int	words(char	*str)
{
	int	i;
	int	nb_words;

	nb_words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			nb_words++;
		i++;
	}
	return (nb_words);
}

/**
 * strtow - function that splits string into words
 * @str: string being passed
 * Return: a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char	**grid;
	int	nb_words;
	int	i;
	int	j;
	int	size;
	int	index;
	int	k;

	if (str == NULL || str == "")
		return (NULL);
	nb_words = words(str);
	grid = malloc(sizeof(char *) * nb_words + 1);
	if (grid == NULL)
		return (NULL);
	i = 0;
	j = 0;
	index = 0;
	while (i < nb_words)
	{
		size = 0;
		j = index;
		while (str[index] != '\0' && str[index] != ' ')
		{
			index++;
			size++;
		}
		index++;
		size++;
		grid[i] = malloc(sizeof(char) * size);
		if (grid[i] == NULL)
		{
			while (i >= 0)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		k = 0;
		while (j < index - 1)
		{
			grid[i][k] = str[j];
			j++;
			k++;
		}
		grid[i][k] = '\0';
		i++;
	}
	grid[i] = NULL;
	return (grid);
}


