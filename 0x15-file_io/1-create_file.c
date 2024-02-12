#include "main.h"
/**
 * create_file- create a file
 * @filename: name of file to create
 * @text_content: string to write to file
 * Return: 1 on success and -1 on faillure
 */

int create_file(const char *filename, char *text_content)
{
	int	fd;
	int	size;
	int	i;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	i = 0;
	size = 0;
	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
	}
	size = write(fd, text_content, i);
	if (size == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
