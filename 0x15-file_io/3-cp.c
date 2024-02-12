#include "main.h"


/**
 * _strlen-return the length of a string.
 * @s:the string.
 * Return:int the length .
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}


/**
 * main- program that copy from a file to another
 * Return:0 if success or 1 if it fails=
 */

int main(int argc, char **argv)
{
	int	fd1, fd2;
	int	w1, w2;
	int	bytesize;
	char	*buffer;

	if (argc != 3)
	{
		write(2, "Usage: cp file_from file_to\n",_strlen("Usage: cp file_from file_to\n"));
		exit(97);
	}
	fd2 = open(argv[2],O_CREAT | O_WRONLY | O_TRUNC, 664);
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		write(2, "Error: Can't read from file",_strlen("Error: Can't read from file NAME_OF_THE_FILE"));
		write(2, argv[1], _strlen(argv[1]));
		exit(98);
	}
	if (fd2 == -1)
	{
		write(2, "Error: Can't write to ", strlen(
	}


}
