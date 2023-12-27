#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h:the header of the dlistint
 * Return:  number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t	*index;
	size_t		i;

	i = 0;
	index = (dlistint_t *)h;
	while (index != NULL)
	{
		printf("%d\n", index->n);
		index = index->next;
		i++;
	}
	return (i);
}
