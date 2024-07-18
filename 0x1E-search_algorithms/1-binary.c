#include "search_algos.h"

/**
 * binary_search-search algrorithm that split always and look in one side
 * @array:address of thee array to search in
 * @size:size of the array
 * @value:value to search for
 * Return:index of value or -1
 */

int binary_search(int *array, size_t size, int value)
{
	int	L;
	int	R;
	int	mid;
	int	i;

	L = 0;
	R = size - 1;
	while (L <= R)
	{
		printf("searching in array :");
		i = L;
		while (i <= R)
		{
			printf(" %d", i);
			if (i < R)
				printf(",");
			i++;
		}
		printf("\n");
		mid = (L + R) / 2;
		if (*(array + mid) < value)
		{
			L = mid + 1;
		}
		else if (*(array + mid) > value)
		{
			R = mid - 1;
		}
		else
			return (mid);
	}
	return (-1);
}

