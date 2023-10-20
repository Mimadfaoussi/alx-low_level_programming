#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * alloc_grid - allocates a matrix of integers
 *
 * @width: width of grid
 * @height: height of grid
 *
 * Return:return pointer to the allocated matrix
 */
int **alloc_grid(int width, int height)
{
	int	i;
	int	j;
	int	**ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(height * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < height)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			while (i >= 0)
				free(ptr[i--]);
			free(ptr);
		}	return (NULL);
		j = 0;
		while (j < width)
		{
			ptr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (ptr);
}
