#include "main.h"

/**
 * read_textfile - reads atext file and prints it to the POSIX standard output
 * @filename:files name.
 * letters:the number of letters it should read and print.
 * Return:the actual number of letters it could read and print.
 * otherwise 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int	f;
	int	size;
	char	*buffer;
	int	length;

	if (filename == NULL || letters == 0)
		return (0);
	buffer = (char *)malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		free(buffer);
		return (0);
	}
	size = read(f, buffer, letters);
	if (size == -1)
	{
		free(buffer);
		close(f);
		return (0);
	}
	length = write(STDOUT_FILENO, buffer, size);
	free(buffer);
	close(f);
	if (length != size)
		return (0);
	return (size);
}
