#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Entry point
 *@size: size of the array to create.
 *@c: character to initnialiaze array with.
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char	*ptr;
	int	i;

	i = 0;
	if (size == 0)
		return (NULL);
	ptr = malloc(size);
	if (ptr == NULL)
		return (NULL);
	while (i < size)
	{
		ptr[i] = c;
		i++
	}
	return (ptr);

}
