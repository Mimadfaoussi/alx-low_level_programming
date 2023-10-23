#include "lists.h"

/**
 * free_listint - Frees a lstint_t list.
 * @head: Pointer to the list.
 * Return:void.
 */
void free_listint(listint_t *head)
{
	listint_t	*ptr;
	listint_t	*next;

	ptr = head;
	while (ptr != NULL)
	{
		next = ptr->next;
		free(ptr);
		ptr = next;
	}
}
