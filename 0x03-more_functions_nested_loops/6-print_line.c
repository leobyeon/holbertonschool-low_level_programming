#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal
 * n is the number of times the character _ should be printed
 * @n: operand
 *
 * Return: nothing, it's void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
}
