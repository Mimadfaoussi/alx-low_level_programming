#include "lists.h"

/**
 * insert_nodeint_at_index - Insert a new node at given index.
 * @head: Pointer to the pointer to the start of the list.
 * @index: The index position to add the node at.
 * @n: The value to assign to the data of the node.
 * Return: Address of the new node, or NULL if it fails or a node cannot be
 * added at the given index.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	unsigned int	i;
	listint_t	*ptr;
	listint_t	*node;
	listint_t	*before;

	i = 0;
	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (index == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	while (i != index && ptr != NULL)
	{
		i++;
		before = ptr;
		ptr = ptr->next;
	}
	if (i == index)
	{
		before->next = node;
		node->next = ptr;
		return (node);
	}
	else
	{
		return (NULL);
	}

}

