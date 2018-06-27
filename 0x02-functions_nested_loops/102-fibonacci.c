#include <stdio.h>

/**
 * main - prints the first 50 iterations of fibonacci
 * Return: 0 if everything works
 */
int main(void)
{
	int i;
	long int prev, curr, next;

	prev = 1;
	curr = 1;
	printf("%li\n", curr);

	for (i = 2; i < 50; i++)
	{
		next = prev + curr;
		printf("%li\n", next);
		prev = curr;
		curr = next;
	}
	return (0);
}
