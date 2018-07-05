#include "holberton.h"

/**
  * _atoi - converts a string to integer
  * @s: operand
  *
  * Return: the integer value
  */
int _atoi(char *s)
{
	int count = 0;
	int res = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			count++;

		if (s[i] >= '0' && s[i] <= '9')
			res = res * 10 + s[i] - '0';

		if ((s[i] < '0' && res != 0) || (s[i] > '9' && res != 0))
			break;
	}

	if (count % 2 == 0)
		return (res);
	else
		return (-res);
}
