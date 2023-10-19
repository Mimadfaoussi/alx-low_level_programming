#include <stdlib.h>
#include "lists.h"
/**
 * *_strdup - function with one argument
 * @str: string argument
 *
 * Description: returns a pointer to allocated space in memory
 * Return: pointer
 */

char *_strdup(const char *str)
{
	int i, j;
	char *ptr;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}

	ptr = malloc(sizeof(char) * i + 1);

	if (ptr == NULL)
		return (NULL);

	j = 0;
	while (str[j] != '\0')
	{
		ptr[j] = str[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}

/**
 * add_node_end - function with two arguments
 * @head: pointer to struct of linked list
 * @str: char type pointer to string
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t	*ptr;
	list_t	*index;
	int	count;

	count = 0;
	while (str[count])
		count++;
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	if (str)
		ptr->str = _strdup(str);
	else
		ptr->str = NULL;
	ptr->len = count;
	if (*head)
	{
		index = *head;
		while (index->next != NULL)
			index = index->next;
		index->next = ptr;
	}
	else
		*head = ptr;
	ptr->next = NULL;
	return (ptr);
}
