#include "main.h"
#include "stdio.h"


/**
 * print_diagsums-prints the sum of the two diagonals .
 * @a:the matrix.
 * @size:size of matrix.
 * Return:void.
 */




void print_diagsums(int *a, int size)
{
	int sum1;
	int sum2;
	int i;
	int j;
	int val;

	sum1 = 0;
	sum2 = 0;
	i = 0;
	val = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (i == j)
				sum1 += a[val];
			if (size - i - 1  == j)
				sum2 += a[val];
			val++;
			j++;
		}
		i++;
	}
	printf("%d, %d\n", sum1, sum2);

}


