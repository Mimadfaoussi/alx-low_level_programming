#include "main.h"
/**
 * main - multiply 2 nbrs.
 * @argc : nb of args.
 * @argv : pointer to list of args.
 * Return: 0 for success and other for faillure .
 */

int main(int argc, char *argv[])
{
	int i, nb;

	if (argc > 1)
	{
		nb = 0;

		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			nb = nb + atoi(argv[i]);
		}
		printf("%d\n", nb);
	}
	else
		printf("0\n");
	return (0);
}
