#include "holberton.h"

/**
 * print_alphabet - prints the alphabet in lowercase followed by a new line
 *
 * Return: it's a void
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
