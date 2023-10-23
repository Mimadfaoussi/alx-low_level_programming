#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list .
 * @head: Pointer to the list.
 * Return: Head node's data (n).
 * 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t	*ptr;
	int		x;

	if (head == NULL || *head == NULL)
		return (0);
	ptr = *head;
	*head = (*head)->next;
	x = ptr->n;
	free(ptr);
	return (x);
}
