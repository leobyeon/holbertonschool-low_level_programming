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

	for (i = 0; str[i] != '\0'; i++)
	{
		if (*(str + i) >= 'a' && *(str + i) < 'n')
		{
			*(str + i) += 13;
		}
		else if (*(str + i) >= 'n' && *(str + i) <= 'z')
		{
			*(str + i) -= 13;
		}
	}
	return (str);
}
