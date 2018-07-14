#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - adds positive numbers
  * @argc: count of arguments
  * @argv: array of pointers to the strings that are the arguments
  *
  * Return: 0 if everything works,
  * if no number is passed, print 0 followed by a new line,
  * if one of the numbers contains non-digits, print Error and return 1
  */
int main(int argc, char *argv[])
{
	if (argc < 2)
		printf("0\n");

	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(atoi(argv[i][j])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
