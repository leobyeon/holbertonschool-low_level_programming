#include <stdio.h>

/**
 * main - prints the sum of all the even values
 * in the fibonacci sequence
 * as long as the value is less than 4,000,000
 * Return: 0 if everything works
 */
int main(void)
{
	int sum;
	int prev = 1, curr = 2, next;

	sum = 2;

	while (sum < 4000000)
	{
		if (next % 2 == 0)
		{
			sum += next;
		}
		next = prev + curr;
		prev = curr;
		curr = next;
	}
	printf("%i\n", sum);
	return (0);
}
