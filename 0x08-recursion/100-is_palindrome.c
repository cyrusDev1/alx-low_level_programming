#include "main.h"

/**
 * is_palindrome - check if s is a palindrome
 * @s: string to checked
 * Return: returns 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int i, len;

	i = 0;
	len = _strlen_recursion(s);

	if (!*s)
		return (1);
	return (check(s, len, i));
}

/**
 * check - blank
 * @s: string to checked
 * @len: string length
 * @i: iterator
 * Return: 1 or 0
 */

int check(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);
	if (s[i] == s[len - i - 1])
		return (check(s, len, i + 1));
	return (0);
}

/**
 * _strlen_recursion - returns the length
 * @s: parameter
 * Return: the length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
