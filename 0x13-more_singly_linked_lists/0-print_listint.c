#include "lists.h"

/**
 * print_listint - Prints all elements of a list
 * @h: Pointer to a list
 * Return: Number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	listint_t	*ptr;
	size_t		nbnodes;

	if (h == NULL)
		return (0);
	nbnodes = 0;
	ptr = (listint_t *)h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		nbnodes++;
		ptr = ptr->next;
	}
	return (nbnodes);
}
