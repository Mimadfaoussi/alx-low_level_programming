#include "lists.h"

/**
 * dlistint_len-returns the number of elements in a linked dlistint_t list
 * @h: head of list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t	*index;
	size_t		i;

	i = 0;
	index = (dlistint_t *)h;
	while (index != NULL)
	{
		index = index->next;
		i++;
	}
	return (i);
}
