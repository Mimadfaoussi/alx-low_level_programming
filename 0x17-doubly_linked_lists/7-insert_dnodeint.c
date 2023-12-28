#include "lists.h"

/**
 * insert_dnodeint_at_index-inserts a new node at a given position
 * @h: head of the list.
 * @idx:index where to insert.
 * @n:element to add
 * Return:the address of the new node, or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t	*node;
	dlistint_t	*tmp;
	dlistint_t	*tmp2;

	tmp = *h;
	while (idx > 1 && tmp != NULL)
	{
		tmp = tmp->next;
		idx--;
	}
	if (idx > 1)
		return (NULL);
	tmp2 = tmp->next;
	node = malloc(sizeof(dlistint_t *));
	if (node == NULL)
		return (NULL);
	node->n = n;
	tmp->next = node;
	if (tmp->next == NULL)
	{
		node->prev = tmp;
	}
	else
	{
		node->next = tmp2;
		tmp2->prev = node;
		node->prev = tmp;
	}
	return (node);
}
