#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: number given
 * Return: void
 */
void print_number(int n)
{
	if (n >= 0 && n < 10)
		_putchar(n + '0');
	else if (n < 0 && n > -10)
	{
		n = n * -1;
		_putchar('-');
		_putchar(n + '0');
	}
	else
	{
		if (n / 10)
		{
			print_number(n / 10);
			n = n % 10;
			if (n < 0)
				_putchar(n * -1 + '0');
			else
				_putchar(n + '0');
		}
	}
}
