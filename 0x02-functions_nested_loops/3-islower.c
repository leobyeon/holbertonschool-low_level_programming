#include "holberton.h"

/**
 * _islower - checks for lowercase letter
 *
 * Return: 1 if c is lowercase
 * 0 otherwise
 */
int _islower(int c)
{
	if (c < 'a')
		return (0);
	else
		return (1);
}
