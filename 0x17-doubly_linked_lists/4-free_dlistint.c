#include "lists.h"

/**
 * free_dlistint- free a list
 * @head: head of the list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t	*index;

	while(head != NULL)
	{
		index = head->next;
		free(head);
		head = index;
	}
}
