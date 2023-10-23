#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to address of a list head.
 * @n: Integer
 * Return: Address of the new element.
 * NULL if failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t	*ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = (int)n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
