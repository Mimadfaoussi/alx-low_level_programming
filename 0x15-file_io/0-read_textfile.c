#include "main.h"

/**
 * read_textfile-read a textfile and print it to the POSIX standard output
 * @filename:name of the file to print
 * @letters:nbre of letters to print
 * Return:nb of letters it could read and print
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int	fd;
	int	bytesRead;
	char	*buffer;
	int	nb;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0 || read(fd, &buffer, 0) < 0)
		return (0);
	buffer = malloc(letters + 1);
	if (!buffer)
		return (0);
	bytesRead = read(fd, buffer, letters);
	if (bytesRead == 0)
	{
		free(buffer);
		return (0);
	}
	buffer[bytesRead] = '\0';
	nb = write(STDOUT_FILENO, buffer, bytesRead);
	if (nb < letters)
	{
		free(buffer);
		return (0);
	}
	else
	{
		free(buffer);
		return (bytesRead);
	}
}

