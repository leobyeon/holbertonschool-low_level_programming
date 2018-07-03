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
  * rev_string - reverses a string
  * @s: operand
  *
  * Return: void
  */
void rev_string(char *s)
{
	if (s != 0 && *s != '\0')
	{
		char *end = s + _strlen(s) - 1;

		while (s < end)
		{
			char tmp = *s;
			*s++ = *end;
			*end-- = tmp;
		}
	}
}
