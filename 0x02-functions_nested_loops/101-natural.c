#include <stdio.h>

/**
 * main - print the sum of all the multiples of 3 and 5 below 1024
 *
 * Return: 0 if everything works
 */
int main(void)
{
	int sum, n = 3;

	while (sum < 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
		}
		n++;
	}
	printf("%i\n", sum);
	return (0);
}
