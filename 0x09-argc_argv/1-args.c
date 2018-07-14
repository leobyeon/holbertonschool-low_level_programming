#include "holberton.h"
#include <stdio.h>

/**
  * main - prints the number of arguments passed into it,
  * followed by a new line
  * @argc: number of command line args; size of argv arr
  * @argv: arr containing the program command line args; arr of size argc
  *
  * Return: 0 if it works
  */
int main(int argc, char *argv[])
{
	if (!argv[argc])
	printf("%i\n", argc - 1);

	return (0);
}
