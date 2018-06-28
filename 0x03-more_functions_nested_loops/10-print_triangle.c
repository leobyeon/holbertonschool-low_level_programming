#include "holberton.h"

/**
 * print_triangle - print a triangle, followed by a new line
 * use the # character to print the triangle
 * @size: operand; size of the triangle
 *
 * Return: nothing, it's void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j > i; j--)
		{
			_putchar(' ');
		}
		for (k = 0; k <= i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
}
