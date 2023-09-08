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
		if (alpha != 57)
		{
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
}



