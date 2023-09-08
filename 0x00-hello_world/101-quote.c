
#include <unistd.h>

/**
 *main - print a text
 *Return:1 for an error !
 */

int main(void)
{
	char qte[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quote, sizeof(qte));
	write(1, "\n", 1);
	return (1);
}
