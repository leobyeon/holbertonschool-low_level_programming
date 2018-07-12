#include "holberton.h"

/**
  * _strlen_recursion - returns the length of a string
  * @s: string
  *
  * Return: length of s
  */
int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}

	return (_strlen_recursion(s + 1) + 1);
}

/**
  * pd - is_palindrome helper: compares two ends of the string
  * @s: string
  * @start: beginning of the string
  * @end: end of the string
  *
  * Return: 1 if true, 0 if false
  */
int pd(char *s, int start, int end)
{
	if (s[start] != s[end])
		return (0);

	else if (s[start] >= s[end] && s[start] == s[end])
		return (1);

	else
		return (pd(s, start + 1, end - 1));
}

/**
  * is_palindrome - checks if a string is a palindrome
  * @s: string to be checked
  *
  * Return: 1 if palindrome,
  * 0 if not
  */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (*s == 0)
		return (1);
	
	return (pd(s, 0, len - 1));
}
