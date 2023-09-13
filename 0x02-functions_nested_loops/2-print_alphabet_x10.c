#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times in the stdout
 * Return:NOthing
 */

void print_alphabet_x10(void)
{
	int i;
	int ch;

	i = 0;
	while(i < 10)
	{
		ch = 'a';
		while(ch <='z')
		{
			_putchar(ch);
			ch++;
		}
		i++;
	}
	_putchar('\n');
}
