#include "lists.h"

/**
 * add_dnodeint_end-adds a new node at the end of a dlistint_t list.
 * @head: head of the list we re work on.
 * @n: the int to add.
 * Return:the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t	*index;
	dlistint_t	*node;

	node = malloc(sizeof(dlistint_t *));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}
	index = *head;
	while (index->next != NULL)
	{
		index = index->next;
	}
	index->next = node;
	return (index->next);
}
