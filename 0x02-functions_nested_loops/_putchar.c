#include <unistd.h>

/**
 * _putchar - writes a character c to stdout 
 * @c : is the character that we want to print it 
 * Return: On success 1.
 * On Error : -1 is returned 
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
