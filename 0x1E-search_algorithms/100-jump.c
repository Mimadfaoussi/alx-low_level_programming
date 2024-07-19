#include "search_algos.h"
#include <math.h>

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

