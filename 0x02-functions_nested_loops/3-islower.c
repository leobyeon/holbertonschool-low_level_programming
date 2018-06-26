#include "holberton.h"

/**
 * _islower - checks for lowercase letter
 *
 * Description: Similar to the standard library function 'islower'
 * Run 'man islower' to learn more
 * @c: operand
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
