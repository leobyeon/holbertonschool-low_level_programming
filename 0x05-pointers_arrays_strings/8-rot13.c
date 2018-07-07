#include "holberton.h"

/**
  * rot13 - encodes a string using rot13
  * @str: string operand
  *
  * Return: string that was encoded in rot13
  */
char *rot13(char *str)
{
	int i;

	for (i = 0; str && str[i]; ++i)
	{
		if ((str[i] >= 'a' && (str[i] + 13) <= 'z') || ((str[i] >= 'A' && (str[i] + 13) <= 'Z')))
				{
					str[i] += 13;
				}
	}
	return (str);
}
