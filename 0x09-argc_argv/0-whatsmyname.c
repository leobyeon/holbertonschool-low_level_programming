#include "holberton.h"
#include <stdio.h>

/**
  * main - prints its name followed by a new line
  * @argc: # of command line args; size of argv arr
  * @argv: arr containing the program command line args; array of size argc
  *
  * Return: 0 if it works
  */
int main(int argc, char *argv[])
{
	if (argc)
	printf("%s\n", argv[0]);

	return (0);
}
