#include <stddef.h>
/**
 * array_iterator - Execute a function over an array elements.
 * @array: array to iterate .
 * @size: the array size.
 * @action: the function to execute.
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && action)
		for (i = 0; i < (int)size; i++)
			action(array[i]);
}
