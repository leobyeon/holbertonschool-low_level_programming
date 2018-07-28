#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_all - prints anything (within reason)
  *
  * @format: a list of types of arguments passed to the function
  *
  * Return: void
  */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, toggle = 0;
	char *str;

	va_start(args, format);

	while (format[i])
	{
		toggle = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(args, int));
				toggle = 1;
				break;

			case 'i':
				printf("%i", va_arg(args, int));
				toggle = 1;
				break;

			case 'f':
				printf("%f", (float) va_arg(args, double));
				toggle = 1;
				break;

			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
					toggle = 1;
					break;
				}
				printf("%s", str);
				break;

			default:
				break;
		}
		if (toggle == 1 && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	va_end(args);
}
