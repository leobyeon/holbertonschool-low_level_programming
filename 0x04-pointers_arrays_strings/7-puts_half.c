#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: operand
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len, i;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}

/**
  * puts_half - prints second half of a string,
  * followed by a new line
  * if the length is odd, print (length_of_the_string - 1) / 2
  * last characters of the string
  * @str: operand
  *
  * Return: void
  */
void puts_half(char *str)
{
	int len = _strlen(str);
	int i, start = 0;

	if (len % 2 == 0)
	{
		start = len / 2;

		for (i = start; i < len; i++)
		{
			_putchar(str[i]);
		}
	}

	else
	{
		start = (len - 1) / 2;

		for (i = start + 1; i < len; i++)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
