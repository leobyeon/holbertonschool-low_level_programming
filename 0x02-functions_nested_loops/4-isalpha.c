#include "holberton.h"

/**
 * _isalpha - checks whether c is a letter
 *
 * Description: case-insensitive
 * @c: operand
 * Return: 1 if true,
 * 0 if false
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
