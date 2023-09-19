#include "main.h"
#include <stdio.h>

/**
 * _atoi-convert a string to an integer.
 * @s:string to convert.
 * Return:int.
 */

int _atoi(char *s)
{
	int result;
	int i;
	int neg;

	i = 0;
	neg = 0;
	result = 0;
	while (s[i] != '\0')
	{
		while (((s[i] == '-') || (s[i] == '+') || (s[i] == ' ')) && (s[i] != '\0'))
		{
			if (s[i] == '-')
				neg++;
			i++;
		}
		while (((s[i] < '0') || (s[i] > '9')) && (s[i] != '\0'))
			i++;
		while (((s[i] >= '0') && (s[i] <= '9')) && (s[i] != '\0'))
		{
			result = result * 10;
			result = result + (s[i] - '0');
			i++;
		}
		if (neg % 2 != 0)
			return (-result);
		return (result);
	}
	return (result);
}
