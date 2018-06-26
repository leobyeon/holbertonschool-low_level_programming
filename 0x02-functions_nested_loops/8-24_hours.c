#include "holberton.h"

/**
 * jack_bauer - prints every minute
 * Description: ...of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 * Return: nothing, it's void
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			if (i < 10 && j < 10)
			{
				_putchar('0');
				_putchar(i + '0');
				_putchar(':');
				_putchar('0');
				_putchar(j + '0');
				_putchar('\n');
				}
			else if (i < 10 && j >= 10)
			{
				_putchar('0');
				_putchar(i + '0');
				_putchar(':');
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
				_putchar('\n');
			}
			else if (i >= 10 && j < 10)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				_putchar(':');
				_putchar('0');
				_putchar(j + '0');
				_putchar('\n');
			}
			else
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
				_putchar(':');
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
				_putchar('\n');
			}
		}
	}
}
