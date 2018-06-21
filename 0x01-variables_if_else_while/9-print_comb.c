#include <stdio.h>

/**
 * main - prints all single digits separated by a comma and a space,
 * followed by a new line
 * Return: 0 if everything works
 */
int main(void)
{
	int n, m;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);

		if (n == '9')
		{
		continue;
		}
		else
		{
			for (m = 0; m < 1; m++)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
