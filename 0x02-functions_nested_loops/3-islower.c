#include "main.h"

/**
 * _islower function check for lowercase character
 * Return: 1 if c is lowercase
 *	0 otherwise
 * c: the character to be checked
 */

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	return (0);
}
