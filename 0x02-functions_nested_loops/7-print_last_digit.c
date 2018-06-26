#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: operand
 * Return: the value of the digit
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
		n = n * -1;
	else
		n = n;

	last = n % 10;

	_putchar(last + '0');

	return (last);
}
