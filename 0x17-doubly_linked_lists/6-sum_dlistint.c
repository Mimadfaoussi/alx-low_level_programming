#include "lists.h"

/**
 * sum_dlistint-sum of all the data
 * @head:head of the list
 * Return:sum of elements
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t	*index;
	int		sum;

	sum = 0;
	index = head;
	while (index != NULL)
	{
		sum = sum + index->n;
		index = index->next;
	}
	return (sum);
}
