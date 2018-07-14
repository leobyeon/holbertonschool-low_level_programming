#include "holberton.h"
#include <stdio.h>

/**
  * main - prints all arguments it receives
  * it will only print one argument per line,
  * ending with a new line
  * @argc: number of command line args; size of argv arr
  * @argv: arr containing the program command line args; arr of size argc
  *
  * Return: 0 if it works
  */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
