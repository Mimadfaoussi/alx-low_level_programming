#include "main.h"

/**
 * main - print programmes nb of args.
 * @argc : nb of args.
 * @argv : pointer to list of args.
 * Return: 0 for success and other for faillure .
 */

int main(int argc, char **argv)
{
	if (argc > 1)
		printf("%d\n", argc - 1);
	return (0);
}


