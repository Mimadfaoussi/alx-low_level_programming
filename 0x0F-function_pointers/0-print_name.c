#include "function_pointers.h"
#include <stdio.h>

/**
 * print - prints a name.
 * @str: string to print.
 * Return: nothing
 */

void print(char *str)
{
	printf("%s\n", str);
}

/**
 * print_name - print name using pointer to function
 * @name: string to add
 * @f: pointer to function
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f = print;
	f(name);
}

