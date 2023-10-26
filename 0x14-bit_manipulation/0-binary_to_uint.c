/**
 * _power - convert binary string to decimal
 * @nb: nber
 * @times:nb of times
 * Return: decimal (unsigned int)
 */
#include <stdio.h>

unsigned int _power(unsigned int nb, unsigned int times)
{
	unsigned int i;
	unsigned int x;

	i = 0;
	x = 1;

	if (times == 0)
		return (1);
	while (i < times)
	{
		x = x * nb;
		i++;
	}
	return (x);
}
/**
  * _strlen - Returns the length of a string
  * @b: String to count
  *
  * Return: String length
  */
unsigned int _strlen(const char *b)
{
	unsigned int i;

	i = 0;
	if (b == NULL)
		return (i);
	while (b[i] != '\0')
		i++;
	return (i);
}

/**
  * binary_to_uint - convert string to binary
  * @b: String to count
  *
  * Return: unsigned int.
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int nb;
	unsigned int length;
	unsigned int i;

	if (b == NULL)
		return (0);
	if (b[0] == '\0')
		return (0);
	i = 0;
	length = _strlen(b) - 1;
	nb = 0;
	while (length > 0)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
		if (b[length] == '1')
			nb = nb + _power(2, i);
		i++;
		length--;
	}
	if (b[length] == '1')
		nb = nb + _power(2, i);
	return (nb);
}

