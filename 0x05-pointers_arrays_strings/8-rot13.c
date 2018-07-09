#include "holberton.h"

/**
  * rot13 - encodes a string using rot13
  * @str: string operand
  *
  * Return: string that was encoded in rot13
  */
char *rot13(char *str)
{
	int i, j;
	char lttrs[] =   "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char mvlttrs[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == lttrs[j])
			{
				str[i] = mvlttrs[j];
				break;
			}
		}
	}
	return (str);
}
