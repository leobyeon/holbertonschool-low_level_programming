#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits,
 * followed by a new line
 * Return: 0 if everything works
 */
int main(void)
{
	int n, m;

	for (n = '0'; n <= '9'; n++)
	{
		for (m = n + 1; m <= '9'; m++)
		{
			putchar(n);
			putchar(m);
			if (n == '8' && m == '9')
			{
				continue;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
