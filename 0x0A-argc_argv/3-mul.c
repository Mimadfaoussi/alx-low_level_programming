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

int main(int argc, char **argv)
{
	int	a;
	int	b;
	int	result;

	if (argc == 3)
	{
		a = conv(argv[1]);
		b = conv(argv[2]);
		result = a * b;
		printf("%d\n", result);
	}
	else
		printf("Error\n");
	return (0);
}


