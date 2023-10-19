#include <stdlib.h>
#include "lists.h"

/**
 * add_node - function with two arguments
 * @head: double pointer to linked list
 * @str: string pointer
 * Return:adress of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t	*ptr;
	int	count;

	count = 0;
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	while (str[count] != '\0')
		count++;
	ptr->len = count;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
