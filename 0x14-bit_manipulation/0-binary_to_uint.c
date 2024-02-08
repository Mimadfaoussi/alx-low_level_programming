#include "main.h"
/**
 * _strlen-return the length of a string.
 * @str:the string to count the length from
 * Return:nb of chars in string or 0
 */
int _strlen(char *str)
{
	int i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

/**
 * _power-calculate power
 * @nb:nombre
 * @n:the power
 * Return:number after power
 */

int _power(int nb, int n)
{
	int i;
	int number;

	i = 0;
	number = 1;
	if (nb == 0)
		return (0);
	if (n == 0)
		return (1);
	while (i < n)
	{
		number = number * nb;
		i++;
	}
	return (number);
}


/**
 * binary_to_uint- converts a binary number to unsigned int.
 * @b:string of 0 and 1 chars.
 * Return:the converted  number or 0 in case of error
 */


unsigned int binary_to_uint(const char *b)
{
	int	i;
	int	size;
	int	nb;

	nb = 0;
	size = _strlen((char *)b) - 1;
	i = 0;
	if (!b)
		return (0);
	if (b[0] == '\0')
		return (0);
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
		{
			nb = nb + _power(2, size);
		}
		size--;
		i++;
	}
	return (nb);
}

