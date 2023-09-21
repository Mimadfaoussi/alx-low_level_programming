#include "main.h"
#include <stdio.h>
/**
 * cap_string-function that capitalizes all words of a string.
 * @str:string to capitalize.
 * Return:string.
 */


int _strlen(char *str)
{
	int length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

int _isalpha(char x)
{
	if (((x >= 'a') && (x <= 'z'))||((x >= 'A') && (x <= 'Z')))
		return (1);
	return (0);
}

char *cap_string(char *str)
{
		int i;
		int length;
		int b;

		i = 0;
		b = 0;
		length = _strlen(str);
		while (str[i] != '\0')
		{
			if (
					str[i] == ' ' ||
					str[i] == '\t'||
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
					str[i] == '}' 
			   )
			{
					b == 0;
					i++;
			}

		/*	printf("%c",str[i]);*/

			while ((_isalpha(str[i] == 0)) && (str[i] != '\0'))
			{
				i++;
			}
			while ((_isalpha(str[i]) == 1) && (str[i] != '\0'))
			{
				if (b == 0)
				{
					if ((str[i] >='a') && (str[i] <= 'z'))
						str[i] = str[i] - 32;
					b = 1;
				}
				i++;
			}
		}
		return (str);
}

int main(void)
{

	char a[] = "test a ss s a aa ss";
	printf("%s",cap_string(a));
	return (0);
}
