#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: operand
 * Return: nothing, it's void
 */
void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		i = 98;
		printf("%i\n", i);
	}
	else if (n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i > 98)
			{
				printf("%i, ", i);
			}
			else
			{
				printf("%i\n", i);
			}
		}
	}
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i < 98)
			{
				printf("%i, ", i);
			}
			else
			{
				printf("%i\n", i);
			}
		}
	}
}
