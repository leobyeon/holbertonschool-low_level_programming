#include "holberton.h"

/**
 * _abs - prints the absolute value of a number
 *
 * Return: 0 if everything works
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
