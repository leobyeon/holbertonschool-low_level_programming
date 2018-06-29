#include <stdio.h>
#include <stdbool.h>
#include <math.h>

/**
 * main - prints the largest prime factor for 612852475143
 *
 * Return: 0 if everything works
 */
int main(void)
{
	unsigned long curr;
	unsigned long max;

	max = 612852475143;
	curr = 2;

	while (max > curr)
	{
		if (max % curr == 0)
		{
			max = max / curr;
			curr = 2;
		}
		else
		{
			curr++;
		}
	}
	printf("%lu\n", curr);
	return (0);
}
