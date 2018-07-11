#include "holberton.h"

/**
  * factorial - returns the factorial of a given number
  * @n: number
  *
  * Return: factorial of n;
  * if n is lower than 0, it should return -1
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (n * factorial(n - 1));
}
