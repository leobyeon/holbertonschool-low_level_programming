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
  * cap_string - capitalizes all words of a string
  * @str: the string to check
  *
  * Return: the capitalized string
  */
char *cap_string(char *str)
{
	int i, j;
	int str_len = _strlen(str);

	for (i = 0, j = i + 1; i < str_len; i++, j++)
	{
		if (contains(str[i]) && !contains(str[j]))
		{
			if (str[j] >= 'a' && str[j] <= 'z')
				str[j] -= 32;
		}
	}

	return (str);
}
