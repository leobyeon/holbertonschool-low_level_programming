#include "holberton.h"

int sq(int n, int i)
{
	if (n == i * i)
	{
		return (i);
	}
	else if (i > n)
	{
		return (-1);
	}
	else
	{
		return sq(n, i + 1);
	}
}

/**
  * _sqrt_recursion - returns the natural square root of a number
  * @n: operand
  *
  * Return: the natural square root of n
  * if not found, -1
  */
int _sqrt_recursion(int n)
{
	return (sq(n, 1));
}
