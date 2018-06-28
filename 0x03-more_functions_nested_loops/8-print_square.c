#include "holberton.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: operand (size of the square)
 *
 * Return: nothing, it's void
 */
void print_square(int size)
{
	int row, column;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
