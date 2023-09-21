#include "main.h"
#include <stdio.h>

/**
 * rot13-encodes a string using rot13
 * @str:string to encode.
 * Return:new encoded string.
 */

char *rot13(char *str)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (j < 26)
		{
			if ((str[i] == alpha[j]) || (str[i] == alpha[j] - 32))
			{
				j = (j + 13) % 26;
				str[i] = alpha[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}

