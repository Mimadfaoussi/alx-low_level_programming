#include "main.h"

/**
 * print_last_digit- print the last digit of a number n
 * @n:the number
 * Return:the last digit of the number n.
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	return (last_digit);
}
