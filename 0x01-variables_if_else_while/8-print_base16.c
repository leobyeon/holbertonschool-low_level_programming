#include <stdio.h>

/**
 * main - prints all single digits of base 16 in lowercase,
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

	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
