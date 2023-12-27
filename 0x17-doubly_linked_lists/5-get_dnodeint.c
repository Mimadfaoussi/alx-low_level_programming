#include "lists.h"

/**
 * get_dnodeint_at_index-returns the nth node of a dlistint_t linked list
 * @head:the head of the list.
 * @index:the index of node to return .
 * Return: element at index or NULL.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t	*elm;
	unsigned int	i;

	i = 0;
	elm = head;
	while (i <= index - 1 && elm != NULL)
	{
		elm = elm->next;
		i++;
	}
	return (elm);
}
