#include <stdio.h>
#include <unistd.h>

/**
 * main - writes a sentence to stderr
 * Return: 1
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 63);
	return (-1);
}
