#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Determines last digit of n and whether
 * it is greater than 5 or not and if it is 0
 * Return: 0 if everything works
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last == 0)
		printf("Last digit of %i is %i and is 0\n", n, last);
	else if (last > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, last);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last);
	return (0);
}
