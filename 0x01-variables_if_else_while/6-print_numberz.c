#include <stdio.h>
#include <limits.h>

/**
 * main - prints all single digits of base 10 from 0,
 * followed by a new line
 * Return: 0 if everything works
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
