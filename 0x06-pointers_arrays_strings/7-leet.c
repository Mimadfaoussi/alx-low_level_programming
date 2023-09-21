#include "main.h"

/**
 * leet-function that encodes a string into 1337.
 * @str:string to encode.
 * Return:string.
 */

char *leet(char *str)
{
	int i;
	int j;
	char x[] = "AEOTL";
	char leet[] = "43071";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if ((str[i] == x[j]) || (str[i] == x[j] + 32))
				str[i] = leet[j];
			j++;
		}
		i++;
	}
	return (str);
}

