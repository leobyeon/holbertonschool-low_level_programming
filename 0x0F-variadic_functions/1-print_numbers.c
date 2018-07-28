#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_numbers - prints numbers, followed by a new line
  *
  * @separator: the string to be printed between numbers
  * @n: number of integers passed to the function
  *
  * Return: void;
  * if separator is null, don't print
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	char const *sep = separator;
	unsigned int i;
	va_list valist;

	if (!separator)
		sep = "";

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (i != n - 1)
			printf("%s", sep);
	}
	printf("\n");
}
