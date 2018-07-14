#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - multiplies two numbers
  * @argc: number of command line args; size of argv arr
  * @argv: arr containing the program command line args; size of argc arr
  *
  * Return: 0 if it works
  */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
