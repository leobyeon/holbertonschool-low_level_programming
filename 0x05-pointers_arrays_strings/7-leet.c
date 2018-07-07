#include "holberton.h"

/**
  * leet - encodes a string into 1337sp34k
  * a and A are replaced by 4
  * e and E are replaced by 3
  * o and O are replaced by 0
  * t and T are replaced by 7
  * l and L are replaced by 1
  * @s: string operand
  *
  * Return: the l337 string
  */
char *leet(char *s)
{
	int i, j;
	int num_arr[5] = {'4', '3', '0', '7', '1'};
	char letter_arr[5] = {'a', 'e', 'o', 't', 'l'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if ((s[i] + 32 == letter_arr[j]) || (s[i] == letter_arr[j]))
				s[i] = num_arr[j];
		}
	}

	return (s);
}
