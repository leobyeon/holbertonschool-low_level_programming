#include "holberton.h"

/**
 * more_numbers - prints numbers from 0 to 14 ten times
 * followed by a new line
 *
 * Return: nothing, it's void
 */
void more_numbers(void)
{
	int i, j;
	char val[11] = "1011121314";

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(j  + '0');
		}
		for (j = 0; j <= 9; j++)
		{
			_putchar(val[j]);
		}
		_putchar('\n');
	}
}
