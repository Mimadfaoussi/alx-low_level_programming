#include <stdio.h>

/**
 * main - just a main that print alphabets
 * Return:0 for success
 */

int main(void)
{
	int alpha;

	for (alpha = 122; alpha >= 97; alpha--)
		putchar(alpha);
	putchar('\n');
	return (0);
}
