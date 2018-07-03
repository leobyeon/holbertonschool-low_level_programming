#include "holberton.h"

/**
  * puts2 - prints one char out of two of a string
  * followed by a new line
  * @str: operand
  *
  * Return: void
  */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 1)
		{
			continue;
		}
		else
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
