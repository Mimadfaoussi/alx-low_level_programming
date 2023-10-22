#include "main.h"

/**
 * main - print programmes arguments.
 * @argc : nb of args.
 * @argv : pointer to list of args.
 * Return: 0 for success and other for faillure .
 */

int main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}


