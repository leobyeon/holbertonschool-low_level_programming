#include <stdio.h>

/**
 * main - Lists the sizes of different data types
 * Return: 0 if everything works
 */
int main(void)
{
	char char_size;
	int int_size;
	long long_size;
	double double_size;
	float float_size;

	printf("Size of a char: %ld byte(s)\n", sizeof(char_size));
	printf("Size of an int: %ld byte(s)\n", sizeof(int_size));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long_size));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(double_size));
	printf("Size of a float: %ld byte(s)\n", sizeof(float_size));

	return (0);
}
