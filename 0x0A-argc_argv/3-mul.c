#include "main.h"

/**
 * conv-take char * and return int.
 * @str:char to convert.
 * Return:integer
 */

int conv(char *str)
{
	int nb;

	nb = 0;
	while (*str != '\0')
	{
		nb = nb * 10;
		nb = nb + *str;
		str++;
	}
	return (nb);
}
/**
 * main - multiply 2 nbrs.
 * @argc : nb of args.
 * @argv : pointer to list of args.
 * Return: 0 for success and other for faillure .
 */

int main(int argc, char *argv[])
{
	int i, nb;

	if (argc == 3)
	{
		nb = 1;

		for (i = 1; i < 3; i++)
			nb = nb * atoi(argv[i]);

		printf("%d\n", nb);
	}
	
	else
	{
		printf("Error\n");
		return (1);
	}
	

	return (0);
}
