#include <stdio.h>
#include <stdbool.h>
#include <math.h>

/**
 * is_prime - checks if a given number is prime
 * @n: operand
 *
 * Return: true if prime, false if not
 */
int is_prime(int n)
{
	int i;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return (false);
		}
		else
		{
			continue;
		}
	}
	return (true);
}

/**
 * main - prints the largest prime factor for 612852475143
 *
 * Return: 0 if everything works
 */
int main(void)
{
	int i = 2;
	long int n, largest_pf, sq_root;

	n = 612852475143;

	sq_root = (int)(sqrt(n));

	while (i < sq_root)
	{
		if (n % i == 0 && is_prime(n / i))
		{
			largest_pf = i;
		}
		i++;
	}
	printf("%li\n", largest_pf);
	return (0);
}
