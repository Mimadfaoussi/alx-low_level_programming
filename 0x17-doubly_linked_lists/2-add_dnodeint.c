#include "lists.h"

/**
 * add_dnodeint- adds a new node at the beginning of a dlistint_t list
 * @head: head that point to lists.
 * @n: the value to add.
 * Return:the first element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t	*h;
	dlistint_t	*node;

	h = *head;
	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = h;
	node->prev = NULL;
	*head = node;
	return (*head);
}
