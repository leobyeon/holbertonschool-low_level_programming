#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - adds positive numbers,
  * followed by a new line
  * if no number is passed to the program, print 0 followed by a new line
  * if one of the numbers contains symbols that are not digits,
  * print Error followed by a new line and return 1
  * @argc: number of command line args; size of argv arr
  * @argv: arr containing the program command line args; arr of size argc
  *
  * Return: 0 if no number is passed
  * 1 if one of the numbers contains symbols that are not digits
  */
int main(int argc, char *argv[])
{
	if (!argc)
	{
		printf("0\n");
		return (1);
	}

	int i;
	int j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%i\n", sum);

	return (0);
}
