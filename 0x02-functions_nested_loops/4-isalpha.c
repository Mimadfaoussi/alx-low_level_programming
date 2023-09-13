#include "main.h"

/**
 * _isalpha - function that check if a char c is alphabetic
 * @c: the character to check
 * Return: 1 if c is a letter
 *	0 otherwise
 */

int test_isalpha(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	if ((c >= 97) && (c <= 122))
		return (1);
	return (0);
}
