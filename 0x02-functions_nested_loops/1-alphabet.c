/**
 *print_alphabet-function that print alphabets in lowercase in the stdout
 *Return:there is no return
 */

void print_alphabet(void)
{
	int ch;

	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}

