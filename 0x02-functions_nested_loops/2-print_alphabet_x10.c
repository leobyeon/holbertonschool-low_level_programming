#include "holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase ten times
 * followed by a new line
 *
 * Return: it's a void
 */
void print_alphabet_x10(void)
{
	int i;
	char ch;

	i = 0;
	while (i <= 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}
}
