#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 * Return: 0 if everything works
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
