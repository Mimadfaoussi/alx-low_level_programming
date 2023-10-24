#include "lists.h"

/**
 * delete_nodeint_at_index - Delete a node at a given index in a list.
 * @head: Pointer to a pointer to the start of the list.
 * @index: The location in the list of the node to delete.
 * Return: 1 on success, or -1 on failure.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int	i;
	listint_t	*ptr;
	listint_t	*before;

	if (head == NULL)
		return (-1);
	ptr = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	i = 0;
	while (i < index && ptr != NULL)
	{
		i++;
		before = ptr;
		ptr = ptr->next;
	}
	if (i == index)
	{
		before->next = ptr->next;
		free(ptr);
		return (1);
	}
	else
		return (-1);
}
