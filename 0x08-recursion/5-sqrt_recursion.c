#include "main.h"

/**
 * _sqrt- count to n until it found or not.
 * @n: number to check for square roots.
 * @i: starting point.
 * Return: the natural square root of number n
 */

int _sqrt(int i, int n)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt(i + 1, n));
}
/**
 * _sqrt_recursion -returns the natural square root of a number.
 * @n: number to check for square roots.
 * Return: the natural square root of number n.
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion(1, n));
}
