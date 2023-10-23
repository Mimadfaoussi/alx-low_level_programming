#include "lists.h"

/**
 * get_nodeint_at_index - Returns nth node of a listint_t linked list.
 * @head: Pointer to the lmked list.
 * @index: Index of node we search for.
 * Return: nth node of a linked list or Null if node does not exist
 */

listint_t	*get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t	*ptr;
	unsigned int	i;

	if (head == NULL)
		return (NULL);
	ptr = head;
	i = 0;
	while (ptr != NULL)
	{
		if (i == index)
			return (ptr);
		ptr = ptr->next;
		i++;
	}
	return (NULL);
}
