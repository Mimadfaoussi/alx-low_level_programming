#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: string1.
 * @s2:	string2.
 * Return: 1 if strings identical , 0 otherwise.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)

