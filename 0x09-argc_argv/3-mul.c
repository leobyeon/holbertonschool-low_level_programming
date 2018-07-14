#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - multiplies two numbers
  * @argc: number of command line args; size of argv arr
  * @argv: arr containing the program command line args; size of argc arr
  *
  * Return: 0 if it works
  */
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	printf("%i\n", a * b);

	return (0);
}
