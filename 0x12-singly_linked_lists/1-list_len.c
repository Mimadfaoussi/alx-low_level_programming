#include "lists.h"
#include <stdlib.h>
/**
 * list_len - function with one argument that cout nb of elmts
 * @h: const list_t pointer argument to struct.
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t	count;
	list_t	*ptr;

	count = 0;
	ptr = (list_t *)h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
