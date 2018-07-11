#include "holberton.h"
#include <stdio.h>

/**
  * prime - helper function for is_prime_number
  * @i: variable to divide n with
  * @n: number to be checked
  *
  * Return: if n is prime, return 1
  * if not, return 0
  */
int prime(int n, int i)
{
	if (n < 2)
		return (0);

	if (n == 2)
		return (1);

	if (n % i == 0)
		return (0);
	else if (i * i > n)
		return (1);
	else
		return (prime(n, i + 1));
}

/**
  * is_prime_number - checks if n is a prime number or not
  * @n: number to be checked
  *
  * Return: if n is prime, return 1
  * if not, return 0
  */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
