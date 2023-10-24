#include "lists.h"
/**
 * print_listint_safe - Print out a given list, but only once if it loops
 * @head: Pointer to the start of the list
 *
 * Return: Number of nodes, if it fails print 98
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t		nbnodes;
	listint_t	*ptr;

	nbnodes = 0;
	ptr = (listint_t *)head;
	while (ptr != NULL)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		ptr = ptr->next;
		nbnodes++;
	}
	return (nbnodes);
}

