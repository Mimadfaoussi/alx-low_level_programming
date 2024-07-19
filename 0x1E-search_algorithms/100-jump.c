#include "search_algos.h"
#include <math.h>

/**
 * jump_search-searching algorithme that is faster than linear search
 * @array:pointer to first element of the array
 * @size:size of the array
 * @value: the value we re trying to find
 * Return: index or -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t	jump;
	size_t	i;
	size_t	prev;
	size_t	max;

	max = 1;
	if (!array)
		return (-1);
	jump = sqrt(size);
	i = 0;
	while (i <= size)
	{
		if (*(array + i) < value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, *(array + i));
		}
		else if (*(array + i) >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i - jump, i);
			max = 0;
			break;
		}
		i = i + jump;
	}
	if (max == 1)
	{
		printf("Value found between indexes [%ld] and [%ld]\n", i - jump, i);
		printf("Value checked array[%ld] = [%d]\n", i - jump, *(array + i - jump));
		return (-1);
	}
	prev = i - jump;
	while (prev <= i)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, *(array + prev));
		if (*(array + prev) == value)
			return (prev);
		prev++;
	}
	return (-1);
}

