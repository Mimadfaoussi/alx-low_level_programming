#include "main.h"
#include <stdio.h>



/**
 * charisalpha-verify if a character is alphabetic
 * @x:char to be checked
 * Return:zero or one .
 */


int charisalpha(char x)
{
	if (((x >= 'a') && (x <= 'z')) || ((x >= 'A') && (x <= 'Z')))
		return (1);
	return (0);
}




/**
 * cap_string-function that capitalizes all words of a string.
 * @str:string to capitalize.
 * Return:string.
 */

char *cap_string(char *str)
{
		int i;
		int b;

		i = 0;
		b = 0;
		while (str[i] != '\0')
		{
			if (
					str[i] == ' ' ||
					str[i] == '\t' ||
					str[i] == '\n' ||
					str[i] == ',' ||
					str[i] == ';' ||
					str[i] == '.' ||
					str[i] == '!' ||
					str[i] == '?' ||
					str[i] == '"' ||
					str[i] == '(' ||
					str[i] == ')' ||
					str[i] == '{' ||
					str[i] == '}')
			{
					b = 0;
					i++;
			}
			if ((charisalpha(str[i]) == 1) && (b == 0))
			{
				if ((str[i] >= 'a') && (str[i] <= 'z'))
				{
					str[i] = str[i] - 32;
				}
				b = 1;
			}
			i++;
		}
		return (str);

}

