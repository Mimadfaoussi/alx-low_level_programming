#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a list
 * @head: Pointer to address of a list
 * @n: Integer
 * Return: Address of the new element or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t	*ptr;
	listint_t	*index;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = (int)n;
	ptr->next = NULL;
	if (*head == NULL)
		*head = ptr;
	else
	{
		index = *head;
		while (index->next != NULL)
			index = index->next;
		index->next = ptr;
	}
	return (ptr);
}
