#include "main.h"
#include <stdio.h>

/**
 * print_array-prints n elements of an array of integers.
 * @n:the number of elements of the array to be printed.
 * @a:the array.
 * Return:nothing.
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}

