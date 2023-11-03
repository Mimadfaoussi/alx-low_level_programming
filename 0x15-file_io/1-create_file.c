#include "main.h"

/**
 * create_file - function that creates a file
 * @filename:the name of the file to create
 * @text_content:is a NULL terminated string to write to the file
 * Return:1 on success , -1 on failure.
*/

int create_file(const char *filename, char *text_content)
{
	int	f;
	int	i;
	int	j;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f == -1)
		return (-1);
	i = 0;
	j = 0;
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
	}
	j = write(f, text_content, i);
	if (j == -1)
	{
		close(f);
		return (-1);
	}
	close(f);
	return (1);
}
