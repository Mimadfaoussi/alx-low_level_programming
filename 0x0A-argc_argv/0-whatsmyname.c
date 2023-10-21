#include "main.h"

/**
 * main - print programmes name.
 * @argc : nb of args.
 * @argv : pointer to list of args.
 * Return: 0 for success and other for faillure .
 */

int main(int argc, char **argv)
{
	if (argc >= 1)
		printf("%s\n", argv[0]);
	else
		printf("error");
	return (0);
}


