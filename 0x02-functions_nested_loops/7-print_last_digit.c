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

 	last = n % 10;

	if (n < 0)
		last = last * -1;

	_putchar(last + '0');

	return (last);
}
