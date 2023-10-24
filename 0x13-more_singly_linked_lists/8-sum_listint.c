#include "lists.h"

/**
 * sum_listint - Add up all the data integers from a list
 * @head: Pointer to the start of the list.
 * Return: The sum of all data or a 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int		sum;
	listint_t	*ptr;

	if (head == NULL)
		return (0);
	ptr = head;
	sum = 0;
	while (ptr != NULL)
	{
		sum = sum + ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
