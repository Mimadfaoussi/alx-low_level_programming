#include "main.h"
#include <stdio.h>
/**
 * _strstr-locates a substring.
 * @haystack:where to look.
 * @needle:what to look for.
 * Return:string or null.
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int pos;

	i = 0;
	while (haystack[i] != '\0')
	{
		while (haystack[i] != needle[0])
			i++;
		pos = i;
		j = 0;
		while (haystack[pos] == needle[j])
		{
			pos++;
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + i);
		i++;
	}
	return ('\0');
}
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}

