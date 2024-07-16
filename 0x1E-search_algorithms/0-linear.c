#include "search_algos.h"

/**
 * linear_search- function that perform linear search for a value
 * @array:array address to search in
 * @size:size of the array
 * @value:value to search for in the array
 * Return:index or -1
 */


int linear_search(int *array, size_t size, int value)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, *(array + i));
		if (*(array + i) == value)
			return (i);
		i++;
	}
	return (-1);
}

