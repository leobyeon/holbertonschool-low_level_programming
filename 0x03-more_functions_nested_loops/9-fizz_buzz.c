#include <stdio.h>

/**
 * main - print numbers 1 through 100 followed by a new line
 * for multiples of 3, print Fizz instead of number
 * for multiples of 5, print Buzz instead of number
 * for multiples of 3 and 5 both, print FizzBuzz
 *
 * Return: 0 if it works
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}

		if (i == 100)
		{
			continue;
		}
		else
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
