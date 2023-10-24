#include "lists.h"

/**
 * reverse_listint - Reverse a given list
 * @head: Pointer to a pointer to the list.
 * Return: Address of head.
 */

listint_t	*reverse_listint(listint_t **head)
{
	listint_t	*ptr;
	listint_t	*index;

	if (head == NULL || *head == NULL)
		return (NULL);
	index = (*head)->next;
	ptr = index->next;
	(*head)->next = NULL;
	index->next = *head;
	while (ptr != NULL)
	{
		*head = index;
		index = ptr;
		ptr = ptr->next;
		index->next = *head;
	}
	*head = index;
	return (*head);
}

