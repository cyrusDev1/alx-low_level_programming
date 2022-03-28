#include "main.h"
#include <stddef.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: first parameter
 * @accept: second param
 * Return: return lengtn
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	while (*s && _strchr(accept, *s++) != NULL)
	{
		len++;
	}
	return (len);
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
