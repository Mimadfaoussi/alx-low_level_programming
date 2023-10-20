#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function with one argument
 * @head: pointer to list_t
 *
 * Description: frees a list
 * Return: void so no return.
 */

void free_list(list_t *head)
{
	list_t	*ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
