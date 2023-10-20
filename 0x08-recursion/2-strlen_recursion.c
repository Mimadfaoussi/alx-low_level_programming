/**
 * _strlen_recursion - Returns Length of String
 * @s: string
 * Return: On success 1.
 * On error, -1 is returned.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (_strlen_recursion(s + 1) + 1);
	else
		return (0);
}
