#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * n is the number of times the character \ should be printed
 * @n: operand
 *
 * Return: nothing, it's void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
