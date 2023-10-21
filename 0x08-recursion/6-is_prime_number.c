#include "main.h"

/**
  * is_prime- checks if the number is a prime number
  * @n: the number to check
  * @i: start point.
  * Return: 1 if n is a prime, else return 0 otherwise.
 */

int is_prime(int i, int n)
{
	if (n < 2)
		return (0);
	else if (n % i == 0)
		return (0);
	else if (n > i)
		return (is_prime(i++, n));
	return (1);
}

/**
  * is_prime_number - checks if the number is a prime number
  * @n: the number to check
  * Return: 1 if n is a prime else 0 .
  */
int is_prime_number(int n)
{
	return (is_prime(2, n));
}
