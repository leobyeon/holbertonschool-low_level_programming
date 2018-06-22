#include <stdio.h>

/**
 * main - prints all single digits separated by a comma and a space,
 * followed by a new line
 * Return: 0 if everything works
 */
int main(void)
{
	int n, m, p, q;

	for (n = '0'; n <= '9'; n++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			for (p = '0'; p <= '9'; p++)
			{
				for (q = '0'; q <= '9'; q++)
				{
					if ((n == p && m == q) || (p == n && q == m))
					{
						continue;
					}
					else
					{
						putchar(n);
						putchar(m);
						putchar(' ');
						putchar(p);
						putchar(q);
						if (n == '9' && m == '8' && p == '9' && q == '9')
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
			}
		}
	}

	putchar('\n');

	return (0);
}
