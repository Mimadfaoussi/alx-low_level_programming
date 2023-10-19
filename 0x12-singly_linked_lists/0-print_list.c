#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list-function that print list elmnts.
 * @h:list to print.
 * Return:nb of nodes.
 * Description: singly linked list node structure
 */

size_t print_list(const list_t *h)
{
	list_t	*tmp;
	size_t	count;

	tmp = (list_t *)h;
	count = 0;
	while (tmp != NULL)
	{
		if (tmp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
		count++;
	}
	return (count);
}

