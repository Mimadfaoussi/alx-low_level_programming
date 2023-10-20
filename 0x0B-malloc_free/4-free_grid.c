#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a grid that was allocated by alloc_grid
 *
 * @grid: - grid to free
 * @height: - height of grid
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int	i;

	i = 0;
	if (grid == NULL)
		return;
	if (grid[i] == NULL)
		return;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
