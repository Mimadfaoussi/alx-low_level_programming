#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of file.
 * @text_content:content to append.
 * Return: 1 on success or -1 otherwise.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int	fd;
	int	size;
	int	w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	size = 0;
	if (text_content != NULL)
	{
		while (text_content[size])
			size++;
	}
	w = write(fd, text_content, size);
	close(fd);
	if (w == -1)
		return (-1);
	return (1);
}

