#include <stdio.h>

/**
 * main - just a main that print alphabets
 * Return:0 for success
 */

int main(void)
{
	char alpha;

	for (alpha = '0'; alpha <= '9'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}

