#include "lists.h"

/**
 * add_dnodeint- adds a new node at the beginning of a dlistint_t list
 * @head: head that point to lists.
 * @n: the value to add.
 * Return:the first element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t	*node;

	node = *head;
	*head = malloc(sizeof(dlistint_t));
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = node;
	return (*head);
}
