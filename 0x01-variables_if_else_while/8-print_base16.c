#include <stdio.h>

/**
 * main - just a main that print alphabets
 * Return:0 for success
 */

int main(void)
{
	int alpha;

	for (alpha = 48; alpha <= 57; alpha++)
		putchar(alpha);
	for (alpha = 97; alpha <= 102; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
