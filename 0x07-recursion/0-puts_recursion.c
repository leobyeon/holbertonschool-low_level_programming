#include "holberton.h"

/**
  * _puts_recursion - prints a new string followed by a new line
  * using recursion
  * @s: operand
  *
  * Return: void
  */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_puts_recursion(s + 1);
}
