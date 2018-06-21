#include <stdlib.h>
#include <time.h>

/**
 * main - Decides if a number is greater than 0, is 0, or is less than 0
 * Return: 0 if everything works
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
		if (n > 0)
			printf("%i is positive\n", n);
		else if (num == 0)
			printf("%i is zero\n", n);
		else
			printf("%i is negative\n", n);
	return (0);
}
