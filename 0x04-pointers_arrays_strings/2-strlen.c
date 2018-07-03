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
