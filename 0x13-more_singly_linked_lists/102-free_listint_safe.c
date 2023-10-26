#include "lists.h"
/**
 * free_listint_safe - Print out a given list, but only once if it loops
 * @head: Pointer to the start of the list
 * Return: Number of node to free
 */
size_t free_listint_safe(listint_t **h)
{
	size_t		nbnodes;
	listint_t	*ptr;

	nbnodes = 0;
	ptr = (listint_t *)head;
	while (ptr != NULL)
	{

		//printf("[%p] %d\n", (void *)ptr, ptr->n);
		ptr = ptr->next;
		free(*head);
		*head = ptr;
		nbnodes++;
	}
	free(head);
	return (nbnodes);
}
