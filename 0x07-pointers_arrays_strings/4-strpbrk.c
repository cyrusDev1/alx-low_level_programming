#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any         
 * of a set of bytes
 * @s: first param
 * @accept: second param
 * Return: returns a pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (_strchr(accept, *s) != NULL)
			return s;
		s++;
	}
	return (NULL);
}

/**
 * _strchr - locates a character in a string
 * @s: first parameter
 * @c: second parameter
 * Return: return c or NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
