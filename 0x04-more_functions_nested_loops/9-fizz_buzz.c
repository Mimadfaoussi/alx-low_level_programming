#include <stdio.h>

/**
 * fizz_buzz-prints the numbers from 1 to 100, followed by a new line.
 * Return:nothing
 */

void fizz_buzz(void)
{
	int i;

	i = 1;
	while (i < 101)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if ((i % 3 == 0))
		{
			printf("Fizz");
		}
		else if ((i % 5 == 0))
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		i++;
		if (i <= 100)
			printf(" ");
	}
	printf("\n");
}

/**
 * main-call fizzbuzz
 * Return:0for success.
 */


int main(void)
{
	fizz_buzz();
	return (0);
}
