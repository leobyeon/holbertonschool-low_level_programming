#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except for e and q,
 * followed by a new line
 * Return: 0 if everything works
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
			continue;
		else
			putchar(ch);
	}
	putchar('\n');

	return (0);
}
