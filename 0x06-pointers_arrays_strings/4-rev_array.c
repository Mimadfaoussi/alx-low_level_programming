#include "main.h"

/**
 * reverse_array-reverses the content of an array of integers.
 * @a:the array.
 * @n:nb of elements in the array.
 * Return:void
 */

void reverse_array(int *a, int n)
{
	int i;
	int x;

	n = n - 1;
	i = 0;
	while (i < n)
	{
		x = a[i];
		a[i] = a[n];
		a[n] = x;
		i++;
		n--;
	}
	return (a);
}
