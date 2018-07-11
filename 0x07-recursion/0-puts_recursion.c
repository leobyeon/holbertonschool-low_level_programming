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
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
