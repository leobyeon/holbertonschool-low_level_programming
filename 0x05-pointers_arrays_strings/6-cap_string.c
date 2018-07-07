#include "holberton.h"

/**
  * contains - checks if c is a special character
  * @c: operand
  *
  * Return: 1 if true,
  * 0 if false
  */
int contains(char c)
{
	int i;
	char special[13] = {'\t', ' ', ',', ';', '.', '!', '?',
	'(', ')', '{', '}', '"', '\n'};

	for (i = 0; i < 13; i++)
	{
		if (c == special[i])
			return (1);
	}

	return (0);
}

/**
  * cap_string - capitalizes all words of a string
  * @str: the string to check
  *
  * Return: the capitalized string
  */
char *cap_string(char *str)
{
	int i, j;
	
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;

	for (i = 0, j = i + 1; str[i] != '\0'; i++, j++)
	{
		if (contains(str[i]) && !contains(str[j]))
		{
			if (str[j] >= 'a' && str[j] <= 'z')
				str[j] -= 32;
		}
	}

	return (str);
}
