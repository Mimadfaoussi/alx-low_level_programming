#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of file.
 * @text_content:content to append.
 * Return: 1 on success or -1 otherwise.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int open_file, write_file, length;

	if (file_name == NULL)
		return (-1);
	open_file = open(filename, O_WRONLY | O_APPEND);
	if (open_file == -1)
		return (-1);
	length = 0;
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			length++;
	}
	write_file = write(open_file, text_content, length);
	if (write_file == -1)
	{
		close(open_file);
		return (-1);
	}
	close(open_file);
	return (1);
}
