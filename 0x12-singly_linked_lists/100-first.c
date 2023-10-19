#include <stdio.h>
#include "lists.h"

void before_main(void) __attribute__((constructor));
/**
 * before_main - function with constructor
 *
 * Description: print string before main executes.
 * Return: nothing since its void
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
