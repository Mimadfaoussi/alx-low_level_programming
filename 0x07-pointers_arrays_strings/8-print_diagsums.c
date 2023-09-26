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

	sum1 = 0;
	sum2 = 0;
	i = 0;
	while (i < size)
	{
		sum1 = sum1 + a[i][i];
		sum2 += a[size - i - 1][size - i - 1];
		i++;
	}
	printf("%d, %d", sum1, sum2);
}
